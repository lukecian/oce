// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeRectangularTrimmedSurface_HeaderFile
#define _GeomToStep_MakeRectangularTrimmedSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_RectangularTrimmedSurface_HeaderFile
#include <Handle_StepGeom_RectangularTrimmedSurface.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_RectangularTrimmedSurface_HeaderFile
#include <Handle_Geom_RectangularTrimmedSurface.hxx>
#endif
class StepGeom_RectangularTrimmedSurface;
class StdFail_NotDone;
class Geom_RectangularTrimmedSurface;


//! This class implements the mapping between class <br>
//!          RectangularTrimmedSurface from Geom and the class <br>
//!          RectangularTrimmedSurface from <br>
//!          StepGeom which describes a <br>
//!          rectangular_trimmed_surface from ISO-IS 10303-42 <br>
class GeomToStep_MakeRectangularTrimmedSurface  : public GeomToStep_Root {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   GeomToStep_MakeRectangularTrimmedSurface(const Handle(Geom_RectangularTrimmedSurface)& RTSurf);
  
  Standard_EXPORT    const Handle_StepGeom_RectangularTrimmedSurface& Value() const;





protected:





private:



Handle_StepGeom_RectangularTrimmedSurface theRectangularTrimmedSurface;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif