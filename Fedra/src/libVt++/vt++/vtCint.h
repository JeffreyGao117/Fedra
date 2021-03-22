/********************************************************************
* vtCint.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error vtCint.h/C is only for compilation. Abort cint.
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
extern G__DLLEXPORT int G__cpp_dllrevvtCint();
extern G__DLLEXPORT void G__set_cpp_environmentvtCint();
extern G__DLLEXPORT void G__cpp_setup_tagtablevtCint();
extern G__DLLEXPORT void G__cpp_setup_inheritancevtCint();
extern G__DLLEXPORT void G__cpp_setup_typetablevtCint();
extern G__DLLEXPORT void G__cpp_setup_memvarvtCint();
extern G__DLLEXPORT void G__cpp_setup_globalvtCint();
extern G__DLLEXPORT void G__cpp_setup_memfuncvtCint();
extern G__DLLEXPORT void G__cpp_setup_funcvtCint();
extern G__DLLEXPORT void G__cpp_setupvtCint();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "include/VtVector.hh"
#include "include/CMatrix.hh"
#include "include/VtMatrix.hh"
#include "include/VtNegMatrix.hh"
#include "include/VtSqMatrix.hh"
#include "include/VtSymMatrix.hh"
#include "include/VtIni.hh"
#include "include/VtTrack.hh"
#include "include/VtRelation.hh"
#include "include/VtKalman.hh"
#include "include/VtMassC.hh"
#include "include/VtRelationList.hh"
#include "include/VtVertex.hh"
#include "include/VtDistance.hh"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__vtCintLN_TClass;
extern G__linked_taginfo G__vtCintLN_TBuffer;
extern G__linked_taginfo G__vtCintLN_TMemberInspector;
extern G__linked_taginfo G__vtCintLN_TObject;
extern G__linked_taginfo G__vtCintLN_vectorlEdoublecOallocatorlEdoublegRsPgR;
extern G__linked_taginfo G__vtCintLN_basic_ostreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__vtCintLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__vtCintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__vtCintLN_iteratorlErandom_access_iterator_tagcOROOTcLcLTSchemaHelpercOlongcOROOTcLcLTSchemaHelpermUcOROOTcLcLTSchemaHelperaNgR;
extern G__linked_taginfo G__vtCintLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLconst_iteratorgR;
extern G__linked_taginfo G__vtCintLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__vtCintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__vtCintLN_iteratorlErandom_access_iterator_tagcOTVirtualArraymUcOlongcOTVirtualArraymUmUcOTVirtualArraymUaNgR;
extern G__linked_taginfo G__vtCintLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLconst_iteratorgR;
extern G__linked_taginfo G__vtCintLN_MATRIX;
extern G__linked_taginfo G__vtCintLN_MATRIXcLcLVtVector;
extern G__linked_taginfo G__vtCintLN_MATRIXcLcLVtNegMatrix;
extern G__linked_taginfo G__vtCintLN_MATRIXcLcLVtMatrix;
extern G__linked_taginfo G__vtCintLN_MATRIXcLcLVtMatrixcLcLVtMatrix_row;
extern G__linked_taginfo G__vtCintLN_MATRIXcLcLVtMatrixcLcLVtMatrix_row_const;
extern G__linked_taginfo G__vtCintLN_MATRIXcLcLVtSqMatrix;
extern G__linked_taginfo G__vtCintLN_MATRIXcLcLVtSymMatrix;
extern G__linked_taginfo G__vtCintLN_MATRIXcLcLCMatrix;
extern G__linked_taginfo G__vtCintLN_VERTEX;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLVtIni;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLRelation;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLRelationIterator;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLConstRelationIterator;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLReverseRelationIterator;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLConstReverseRelationIterator;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLTrack;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLVertex;
extern G__linked_taginfo G__vtCintLN_listlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgR;
extern G__linked_taginfo G__vtCintLN_listlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgRcLcLiterator;
extern G__linked_taginfo G__vtCintLN_listlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgRcLcLreverse_iterator;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLRelationList;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLKalman;
extern G__linked_taginfo G__vtCintLN_VERTEXcLcLMassC;
extern G__linked_taginfo G__vtCintLN_listlEVERTEXcLcLMassCmUcOallocatorlEVERTEXcLcLMassCmUgRsPgR;
extern G__linked_taginfo G__vtCintLN_listlEVERTEXcLcLMassCmUcOallocatorlEVERTEXcLcLMassCmUgRsPgRcLcLiterator;
extern G__linked_taginfo G__vtCintLN_vectorlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgR;
extern G__linked_taginfo G__vtCintLN_vectorlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgRcLcLconst_iterator;
extern G__linked_taginfo G__vtCintLN_vectorlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgRcLcLiterator;
extern G__linked_taginfo G__vtCintLN_reverse_iteratorlEvectorlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__vtCintLN_iteratorlErandom_access_iterator_tagcOVERTEXcLcLRelationmUcOlongcOVERTEXcLcLRelationmUmUcOVERTEXcLcLRelationmUaNgR;
extern G__linked_taginfo G__vtCintLN_reverse_iteratorlEvectorlEVERTEXcLcLRelationmUcOallocatorlEVERTEXcLcLRelationmUgRsPgRcLcLconst_iteratorgR;
extern G__linked_taginfo G__vtCintLN_vectorlEVERTEXcLcLTrackmUcOallocatorlEVERTEXcLcLTrackmUgRsPgR;
extern G__linked_taginfo G__vtCintLN_vectorlEVERTEXcLcLTrackmUcOallocatorlEVERTEXcLcLTrackmUgRsPgRcLcLconst_iterator;
extern G__linked_taginfo G__vtCintLN_vectorlEVERTEXcLcLTrackmUcOallocatorlEVERTEXcLcLTrackmUgRsPgRcLcLiterator;
extern G__linked_taginfo G__vtCintLN_reverse_iteratorlEvectorlEVERTEXcLcLTrackmUcOallocatorlEVERTEXcLcLTrackmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__vtCintLN_iteratorlErandom_access_iterator_tagcOVERTEXcLcLTrackmUcOlongcOVERTEXcLcLTrackmUmUcOVERTEXcLcLTrackmUaNgR;
extern G__linked_taginfo G__vtCintLN_reverse_iteratorlEvectorlEVERTEXcLcLTrackmUcOallocatorlEVERTEXcLcLTrackmUgRsPgRcLcLconst_iteratorgR;

/* STUB derived class for protected member access */
