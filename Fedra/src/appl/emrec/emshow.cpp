//-- Author :  Frank Meisel   11/November/2010

#include <string.h>
#include <iostream>
#include <TEnv.h>
#include "EdbLog.h"
#include "EdbScanProc.h"

using namespace std;

void print_help_message()
{
    cout<< "\nUsage: \n\t  emshow -set=ID [ -o=DATA_DIRECTORY -v=DEBUG] \n\n";
    cout<< "\t\t  ID    - id of the dataset formed as BRICK.PLATE.MAJOR.MINOR \n";
    cout<< "\t\t  DEBUG - verbosity level: 0-print nothing, 1-errors only, 2-normal, 3-print all messages\n";
    cout<< "\t\t  -vt    - start showering from linked tracks attached to vertices with IP<250 (not yet included)\n";
    cout<< "\t\t  -lt    - start showering from linked tracks (all; standard)\n";
    cout<< "\t\t  -bt    - start showering from basetracks (all; usefull if no linked tracks done yet)\n";
    cout<< "\nExample: \n";
    cout<< "\t  emshow -id=4554.10.1.0 -o/scratch/BRICKS -lt\n";
    cout<< "\n  The data location directory if not explicitly defined will be taken from .rootrc as: \n";
    cout<< "\t  emrec.outdir:      /scratch/BRICKS \n";
    cout<< "\t  emrec.EdbDebugLevel:      1\n";
    cout<<endl;
}

void set_default(TEnv &cenv)
{
  // default parameters for shower reconstruction
  cenv.SetValue("emshow.cpcut" ,"s.eW>13&&eCHI2P<2.5&&s1.eFlag>=0&&s2.eFlag>=0&&eN1==1&&eN2==1");
/*  cenv.SetValue("fedra.track.minPlate"  ,-999 );
  cenv.SetValue("fedra.track.maxPlate"  , 999 );
  cenv.SetValue("fedra.track.refPlate"  , 999 );
  cenv.SetValue("fedra.track.nsegmin"   , 2 );
  cenv.SetValue("fedra.track.ngapmax"   , 4 );
  cenv.SetValue("fedra.track.probmin"   , 0.01 );
  cenv.SetValue("fedra.track.momentum"  , 2 );
  cenv.SetValue("fedra.track.mass"      , 0.14 );*/
  cenv.SetValue("emshow.outdir"          , "..");
  cenv.SetValue("emshow.env"             , "shower.rootrc");
  cenv.SetValue("emshow.EdbDebugLevel"   , 1);
}

int main(int argc, char* argv[])
{
    if (argc < 2)   {
        print_help_message();
        return 0;
    }

    TEnv cenv("showerenv");
    set_default(cenv);
    gEDBDEBUGLEVEL        = cenv.GetValue("emshow.EdbDebugLevel" , 1);
    const char *env       = cenv.GetValue("emshow.env"            , "shower.rootrc");
    const char *outdir    = cenv.GetValue("emshow.outdir"         , "./");

    bool      do_set      = false;
    bool      do_pred     = false;
    bool      do_VSB      = false;
		bool      do_showerfrom_vt      = false;
		bool      do_showerfrom_lt      = false;
		bool      do_showerfrom_bt      = false;
		
    Int_t     pred_plate  = 0, to_plate=0;
    Int_t     brick=0, plate=0, major=0, minor=0;

    for (int i=1; i<argc; i++ ) {
        char *key  = argv[i];

        if (!strncmp(key,"-set=",5))
        {
            if (strlen(key)>5)	sscanf(key+5,"%d.%d.%d.%d",&brick,&plate,&major,&minor);
            do_set=true;
        }
        else if (!strncmp(key,"-o=",3))
        {
            if (strlen(key)>3)	outdir=key+3;
        }
        else if (!strncmp(key,"-pred=",6))
        {
            if (strlen(key)>6)	{
                pred_plate = atoi(key+6);
                do_pred=true;
            }
        }
        else if (!strncmp(key,"-vt=",3))
        {
            if (strlen(key)>3)	{
                do_showerfrom_vt=true;
            }
        }
        else if (!strncmp(key,"-vt=",3))
        {
            if (strlen(key)>3)	{
                do_showerfrom_lt=true;
            }
        }
        else if (!strncmp(key,"-bt=",3))
        {
            if (strlen(key)>3)	{
                do_showerfrom_bt=true;
            }
        }
        else if (!strncmp(key,"-VSB=",5))
        {
            if (strlen(key)>5)  {
                do_VSB=true;
                to_plate = atoi(key+5);
            }
        }
        else if (!strncmp(key,"-v=",3))
        {
            if (strlen(key)>3)	gEDBDEBUGLEVEL = atoi(key+3);
        }
    }

    if (!do_set)   {
        print_help_message();
        return 0;
    }

    cenv.SetValue("emshow.env"                  , env);
    cenv.ReadFile( cenv.GetValue("emshow.env"   , "shower.rootrc") ,kEnvLocal);
    cenv.SetValue("emshow.outdir"               , outdir);
    cenv.WriteFile("shower.save.rootrc");

    if (do_set) {
        EdbScanProc sproc;
        sproc.eProcDirClient=outdir;
        printf("\n----------------------------------------------------------------------------\n");
        printf("tracking set %d.%d.%d.%d\n", brick,plate, major,minor);
        printf("----------------------------------------------------------------------------\n\n");

        EdbID id(brick,plate,major,minor);
        EdbScanSet *ss = sproc.ReadScanSet(id);
        ss->Brick().SetID(brick);
        //ss->MakePIDList();
        //sproc.AssembleScanSet(*ss);

        TCut c = gEnv->GetValue("emshow.cpcut" ,"s.eW>13&&eCHI2P<2.5&&s1.eFlag>=0&&s2.eFlag>=0&&eN1==1&&eN2==1");

        //EdbScanCond cond;
        //cond.Print();
        //sproc.TrackSetBT(*ss,cond,c);
	sproc.TrackSetBT(*ss,cenv);

    }
    if (do_VSB) {
        EdbScanProc sproc;
        sproc.eProcDirClient=outdir;
        printf("\n----------------------------------------------------------------------------\n");
        printf("prepare predictions %d.%d.%d.%d  for the plate %d\n", brick,plate, major,minor, pred_plate);
        printf("----------------------------------------------------------------------------\n\n");

        EdbID id(brick,plate,major,minor);
        EdbScanSet *ss = sproc.ReadScanSet(id);
        ss->Brick().SetID(brick);
        sproc.AssembleScanSet(*ss);


        EdbID predid(id);
        predid.ePlate = pred_plate;

        sproc.FindPredictionsRawSet(predid, *ss, to_plate);
        EdbPVRec ali;
        sproc.ReadFoundTracks(*ss, ali);
        sproc.WriteSBTracks(*(ali.eTracks), id);

    }

    return 1;
}
