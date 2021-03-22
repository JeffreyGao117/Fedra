/********************************************************************
* EbaseDict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error EbaseDict.h/C is only for compilation. Abort cint.
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define G__ANSIHEADER
#define G__DICTIONARY
#define G__PRIVATE_GVALUE
#include "G__ci.h"
#include "FastAllocString.h"
extern "C" {
extern G__DLLEXPORT int G__cpp_dllrevEbaseDict();
extern G__DLLEXPORT void G__set_cpp_environmentEbaseDict();
extern G__DLLEXPORT void G__cpp_setup_tagtableEbaseDict();
extern G__DLLEXPORT void G__cpp_setup_inheritanceEbaseDict();
extern G__DLLEXPORT void G__cpp_setup_typetableEbaseDict();
extern G__DLLEXPORT void G__cpp_setup_memvarEbaseDict();
extern G__DLLEXPORT void G__cpp_setup_globalEbaseDict();
extern G__DLLEXPORT void G__cpp_setup_memfuncEbaseDict();
extern G__DLLEXPORT void G__cpp_setup_funcEbaseDict();
extern G__DLLEXPORT void G__cpp_setupEbaseDict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "EdbSegCorr.h"
#include "EdbLayer.h"
#include "EdbScanCond.h"
#include "EdbBrick.h"
#include "EdbScanSet.h"
#include "EdbID.h"
#include "EdbSegP.h"
#include "EdbSigma.h"
#include "EdbSEQ.h"
#include "EdbCouplesTree.h"
#include "EdbSegCouple.h"
#include "EdbSegmentCut.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__EbaseDictLN_TClass;
extern G__linked_taginfo G__EbaseDictLN_TBuffer;
extern G__linked_taginfo G__EbaseDictLN_TMemberInspector;
extern G__linked_taginfo G__EbaseDictLN_TObject;
extern G__linked_taginfo G__EbaseDictLN_TNamed;
extern G__linked_taginfo G__EbaseDictLN_iteratorlErandom_access_iterator_tagcOcharcOlongcOcharmUcOcharaNgR;
extern G__linked_taginfo G__EbaseDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__EbaseDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__EbaseDictLN_iteratorlErandom_access_iterator_tagcOROOTcLcLTSchemaHelpercOlongcOROOTcLcLTSchemaHelpermUcOROOTcLcLTSchemaHelperaNgR;
extern G__linked_taginfo G__EbaseDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLconst_iteratorgR;
extern G__linked_taginfo G__EbaseDictLN_TList;
extern G__linked_taginfo G__EbaseDictLN_TObjArray;
extern G__linked_taginfo G__EbaseDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__EbaseDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__EbaseDictLN_iteratorlErandom_access_iterator_tagcOTVirtualArraymUcOlongcOTVirtualArraymUmUcOTVirtualArraymUaNgR;
extern G__linked_taginfo G__EbaseDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLconst_iteratorgR;
extern G__linked_taginfo G__EbaseDictLN_TArrayF;
extern G__linked_taginfo G__EbaseDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__EbaseDictLN_TRefArray;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__EbaseDictLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TElementActionTlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TElementPosActionTlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTRow_constlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTRowlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTDiag_constlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTColumn_constlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTFlat_constlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTSub_constlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTSparseRow_constlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTSparseDiag_constlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTColumnlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTDiaglEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTFlatlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTSublEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTSparseRowlEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TMatrixTSparseDiaglEdoublegR;
extern G__linked_taginfo G__EbaseDictLN_TH1F;
extern G__linked_taginfo G__EbaseDictLN_EdbAffine2D;
extern G__linked_taginfo G__EbaseDictLN_EdbPoint;
extern G__linked_taginfo G__EbaseDictLN_EdbPoint2D;
extern G__linked_taginfo G__EbaseDictLN_EdbAngle2D;
extern G__linked_taginfo G__EbaseDictLN_EdbTrack2D;
extern G__linked_taginfo G__EbaseDictLN_EdbID;
extern G__linked_taginfo G__EbaseDictLN_EdbSegP;
extern G__linked_taginfo G__EbaseDictLN_EdbSegCorr;
extern G__linked_taginfo G__EbaseDictLN_TF1;
extern G__linked_taginfo G__EbaseDictLN_EdbH1;
extern G__linked_taginfo G__EbaseDictLN_EdbH2;
extern G__linked_taginfo G__EbaseDictLN_EdbCell2;
extern G__linked_taginfo G__EbaseDictLN_EdbLayer;
extern G__linked_taginfo G__EbaseDictLN_EdbCorrectionMap;
extern G__linked_taginfo G__EbaseDictLN_EdbScanCond;
extern G__linked_taginfo G__EbaseDictLN_EdbPlateP;
extern G__linked_taginfo G__EbaseDictLN_EdbBrickP;
extern G__linked_taginfo G__EbaseDictLN_TIndexCell;
extern G__linked_taginfo G__EbaseDictLN_EdbScanSet;
extern G__linked_taginfo G__EbaseDictLN_EdbSigma;
extern G__linked_taginfo G__EbaseDictLN_TVector2;
extern G__linked_taginfo G__EbaseDictLN_TTree;
extern G__linked_taginfo G__EbaseDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__EbaseDictLN_TEventList;
extern G__linked_taginfo G__EbaseDictLN_TCut;
extern G__linked_taginfo G__EbaseDictLN_EdbPattern;
extern G__linked_taginfo G__EbaseDictLN_EdbSEQ;
extern G__linked_taginfo G__EbaseDictLN_EdbSegCouple;
extern G__linked_taginfo G__EbaseDictLN_EdbMask;
extern G__linked_taginfo G__EbaseDictLN_TIndex2;
extern G__linked_taginfo G__EbaseDictLN_EdbCouplesTree;
extern G__linked_taginfo G__EbaseDictLN_EdbSegmentCut;

/* STUB derived class for protected member access */