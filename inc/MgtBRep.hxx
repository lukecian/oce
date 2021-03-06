// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MgtBRep_HeaderFile
#define _MgtBRep_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_PTopoDS_HShape.hxx>
#include <MgtBRep_TriangleMode.hxx>
class PTopoDS_HShape;
class TopoDS_Shape;
class PTColStd_TransientPersistentMap;
class PTopoDS_Shape1;
class PTColStd_PersistentTransientMap;
class MgtBRep_TranslateTool;
class MgtBRep_TranslateTool1;


//! The MgtBRep package  provides methods to translate
//! data  between  the  BRep    package and the  PBRep
//! package.
//!
//! That  is   to    translate  persistent  BRep  data
//! structures  in  Transient BRep data structures and
//! vice-versa.
//!
//! The MgtBRep package uses :
//!
//! * The  MgtBas  package to bind  a  transient and a
//! persistent object.
//!
//! * The  MgtTopoDS package to provide basic methods
//! to translate TopoDS and PTopoDS data.
//!
//! * The MgtTopLoc package to translate Locations.
//!
//! * The  MgtGeom,  MgtGeom2d  packages to translate
//! geometric data.
//!
//! * The MgtPoly package to translate triangulation data.
//!
//! The Translate methods has TriangleMode argument.
//! If it is MgtBRep_WithTriangle, the methods returns or
//! create a Shape with triangulation.
class MgtBRep 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Translate a transient Shape to a persistent Shape.
  //! he translation is performed according
  //! to the map aMap and the triangulation
  //! specified by aTriMode
  Standard_EXPORT static   Handle(PTopoDS_HShape) Translate (const TopoDS_Shape& aShape, PTColStd_TransientPersistentMap& aMap, const MgtBRep_TriangleMode aTriMode) ;
  
  //! Translate a transient Shape to a persistent Shape.
  //! The translation is performed according to the map aMap and the
  //! triangulation specified by aTriMode.
  //! The map, aMap, is a tool that lets you share
  //! topological components. When the map is
  //! initialized, it is empty. It is built up and used by the
  //! Translate function every time a topological
  //! component is converted from persistent to
  //! transient and vice versa. This is true for all
  //! topological components that can be shared:
  //! vertex, edge, wire, face, shell, solid, and so on.
  //! This map allows you to share individual
  //! components as they are translated, and also lets
  //! you share previously converted components
  //! when you translate other objects which share
  //! (i.e. refer to) these components.
  //! The triangulation mode, aTriMode, specifies
  //! whether a representation of the object as a set
  //! of triangles - if such a representation exists - is
  //! to be translated or not in addition to the
  //! canonical definition of the object.
  Standard_EXPORT static   void Translate1 (const TopoDS_Shape& aShape, PTColStd_TransientPersistentMap& aMap, PTopoDS_Shape1& aResult, const MgtBRep_TriangleMode aTriMode) ;
  
  //! Translate a persistent Shape to a transient Shape.
  //! Used for upwards compatibility.
  Standard_EXPORT static   void Translate (const Handle(PTopoDS_HShape)& aShape, PTColStd_PersistentTransientMap& aMap, TopoDS_Shape& aResult, const MgtBRep_TriangleMode aTriMode) ;
  
  //! Translate a persistent Shape to a transient Shape.
  Standard_EXPORT static   void Translate1 (const PTopoDS_Shape1& aShape, PTColStd_PersistentTransientMap& aMap, TopoDS_Shape& aResult, const MgtBRep_TriangleMode aTriMode) ;




protected:





private:




friend class MgtBRep_TranslateTool;
friend class MgtBRep_TranslateTool1;

};







#endif // _MgtBRep_HeaderFile
