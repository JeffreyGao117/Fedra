/********************************************************************
* EdrCint.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error EdrCint.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableEdrCint();
extern void G__cpp_setup_inheritanceEdrCint();
extern void G__cpp_setup_typetableEdrCint();
extern void G__cpp_setup_memvarEdrCint();
extern void G__cpp_setup_globalEdrCint();
extern void G__cpp_setup_memfuncEdrCint();
extern void G__cpp_setup_funcEdrCint();
extern void G__set_cpp_environmentEdrCint();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "EdbPattern.h"
#include "EdbPVRec.h"
#include "EdbVertex.h"
#include "EdbVertexComb.h"
#include "EdbVertexSpace.h"
#include "EdbTrackFitter.h"
#include "EdbMomentumEstimator.h"
#include "EdbPlateTracking.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__EdrCintLN_TClass;
extern G__linked_taginfo G__EdrCintLN_TBuffer;
extern G__linked_taginfo G__EdrCintLN_TMemberInspector;
extern G__linked_taginfo G__EdrCintLN_TObject;
extern G__linked_taginfo G__EdrCintLN_TNamed;
extern G__linked_taginfo G__EdrCintLN_TString;
extern G__linked_taginfo G__EdrCintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__EdrCintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__EdrCintLN_TList;
extern G__linked_taginfo G__EdrCintLN_TObjArray;
extern G__linked_taginfo G__EdrCintLN_TClonesArray;
extern G__linked_taginfo G__EdrCintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__EdrCintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__EdrCintLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__EdrCintLN_TTree;
extern G__linked_taginfo G__EdrCintLN_TArrayI;
extern G__linked_taginfo G__EdrCintLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__EdrCintLN_TSortedList;
extern G__linked_taginfo G__EdrCintLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TElementActionTlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TElementPosActionTlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TElementActionTlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TElementPosActionTlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTRow_constlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTRowlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTDiag_constlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTColumn_constlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTFlat_constlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSub_constlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSparseRow_constlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSparseDiag_constlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTColumnlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTDiaglEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTFlatlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSublEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSparseRowlEdoublegR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSparseDiaglEdoublegR;
extern G__linked_taginfo G__EdrCintLN_EdbAffine2D;
extern G__linked_taginfo G__EdrCintLN_EdbPoint;
extern G__linked_taginfo G__EdrCintLN_EdbPoint2D;
extern G__linked_taginfo G__EdrCintLN_EdbPoint3D;
extern G__linked_taginfo G__EdrCintLN_EdbAngle2D;
extern G__linked_taginfo G__EdrCintLN_EdbTrack2D;
extern G__linked_taginfo G__EdrCintLN_EdbPointsBox2D;
extern G__linked_taginfo G__EdrCintLN_EdbID;
extern G__linked_taginfo G__EdrCintLN_EdbSegP;
extern G__linked_taginfo G__EdrCintLN_TIndexCell;
extern G__linked_taginfo G__EdrCintLN_EdbVTA;
extern G__linked_taginfo G__EdrCintLN_EdbVertex;
extern G__linked_taginfo G__EdrCintLN_EdbSegmentsBox;
extern G__linked_taginfo G__EdrCintLN_EdbTrackP;
extern G__linked_taginfo G__EdrCintLN_EdbPattern;
extern G__linked_taginfo G__EdrCintLN_EdbPatternsVolume;
extern G__linked_taginfo G__EdrCintLN_THashList;
extern G__linked_taginfo G__EdrCintLN_TArrayF;
extern G__linked_taginfo G__EdrCintLN_TF1;
extern G__linked_taginfo G__EdrCintLN_EdbScanCond;
extern G__linked_taginfo G__EdrCintLN_EdbSegCouple;
extern G__linked_taginfo G__EdrCintLN_TIndex2;
extern G__linked_taginfo G__EdrCintLN_EdbScanSet;
extern G__linked_taginfo G__EdrCintLN_EdbPatCouple;
extern G__linked_taginfo G__EdrCintLN_EdbPVRec;
extern G__linked_taginfo G__EdrCintLN_TMatrixTlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTRow_constlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTRowlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTDiag_constlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTColumn_constlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTFlat_constlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSub_constlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSparseRow_constlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSparseDiag_constlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTColumnlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTDiaglEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTFlatlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSublEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSparseRowlEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TMatrixTSparseDiaglEfloatgR;
extern G__linked_taginfo G__EdrCintLN_TVector3;
extern G__linked_taginfo G__EdrCintLN_TGraphErrors;
extern G__linked_taginfo G__EdrCintLN_TGraphAsymmErrors;
extern G__linked_taginfo G__EdrCintLN_VERTEX;
extern G__linked_taginfo G__EdrCintLN_VERTEXcLcLTrack;
extern G__linked_taginfo G__EdrCintLN_VERTEXcLcLVertex;
extern G__linked_taginfo G__EdrCintLN_listlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgR;
extern G__linked_taginfo G__EdrCintLN_listlEVERTEXcLcLMassCmUcOallocatorlEVERTEXcLcLMassCmUgRsPgR;
extern G__linked_taginfo G__EdrCintLN_vectorlEVERTEXcLcLTrackmUcOallocatorlEVERTEXcLcLTrackmUgRsPgR;
extern G__linked_taginfo G__EdrCintLN_reverse_iteratorlEvectorlEVERTEXcLcLTrackmUcOallocatorlEVERTEXcLcLTrackmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__EdrCintLN_EdbVertexPar;
extern G__linked_taginfo G__EdrCintLN_EdbVertexRec;
extern G__linked_taginfo G__EdrCintLN_EdbTopology;
extern G__linked_taginfo G__EdrCintLN_EdbVertexComb;
extern G__linked_taginfo G__EdrCintLN_EdbVertexSpace;
extern G__linked_taginfo G__EdrCintLN_EdbTrackFitter;
extern G__linked_taginfo G__EdrCintLN_pairlEunsignedsPintcOintgR;
extern G__linked_taginfo G__EdrCintLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__EdrCintLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__EdrCintLN_TCanvas;
extern G__linked_taginfo G__EdrCintLN_EdbMomentumEstimator;
extern G__linked_taginfo G__EdrCintLN_EdbPlateP;
extern G__linked_taginfo G__EdrCintLN_EdbPlateTracking;

/* STUB derived class for protected member access */