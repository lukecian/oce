// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape_HeaderFile
#define _TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopTools_SequenceOfShape_HeaderFile
#include <TopTools_SequenceOfShape.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class TopTools_SequenceOfShape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeSequenceOfShape;
class TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape;



class TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape : public TCollection_MapNode {

public:

  
      TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape(const TopoDS_Shape& K,const TopTools_SequenceOfShape& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        TopTools_SequenceOfShape& Value() const;




  DEFINE_STANDARD_RTTI(TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape)

protected:




private: 


TopoDS_Shape myKey;
TopTools_SequenceOfShape myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopTools_SequenceOfShape
#define TheItem_hxx <TopTools_SequenceOfShape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape
#define TCollection_DataMapNode_hxx <TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape.hxx>
#define TCollection_DataMapIterator TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape
#define TCollection_DataMapIterator_hxx <TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape.hxx>
#define Handle_TCollection_DataMapNode Handle_TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape
#define TCollection_DataMapNode_Type_() TopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape_Type_()
#define TCollection_DataMap TopTools_DataMapOfShapeSequenceOfShape
#define TCollection_DataMap_hxx <TopTools_DataMapOfShapeSequenceOfShape.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif