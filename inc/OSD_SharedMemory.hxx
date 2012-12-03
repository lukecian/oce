// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_SharedMemory_HeaderFile
#define _OSD_SharedMemory_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _OSD_Error_HeaderFile
#include <OSD_Error.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_ConstructionError;
class Standard_NullObject;
class OSD_OSDError;
class Standard_ProgramError;
class TCollection_AsciiString;


//! IPC Tools -Shared Memory <br>
//!          This is a low level interface for communications. <br>
//!          Using shared memory, processes can use a common area to <br>
//!          communicate. <br>
//!          You can create and delete a shared memory. <br>
class OSD_SharedMemory  {
public:

  DEFINE_STANDARD_ALLOC

  //! Allocates room for shared memory name. <br>
//!          This is to be used with 'Open'. <br>
//!          In this case, the process is a client of shared memory. <br>
  Standard_EXPORT   OSD_SharedMemory();
  //! Instantiates SharedMemory object with parameters. <br>
//!          A name to make sure shared memory is unique and a size in <br>
//!          bytes for the size of shared memory. <br>
  Standard_EXPORT   OSD_SharedMemory(const TCollection_AsciiString& Name,const Standard_Integer size);
  //! Creates a shared memory in the system <br>
//!          This is for a server process. <br>
  Standard_EXPORT     void Build() ;
  //! Opens a shared memory <br>
//!          Raises ConstructionError when the name contains characters <br>
//!          not in range of ' '...'~'. <br>
//!          Raises ProgramError when the size given is negative or null. <br>
//!          This is for a server process. <br>
//! <br>
  Standard_EXPORT     void Open(const TCollection_AsciiString& Name,const Standard_Integer size) ;
  //! Removes a shared memory access. <br>
//!          This is used only by a server process ! <br>
  Standard_EXPORT     void Delete() ;
  //! Returns address of shared memory. <br>
//!          Raises NullObject when the Shared Memory is not created. <br>
  Standard_EXPORT     Standard_Address GiveAddress() const;
  //! Returns TRUE if an error occurs <br>
  Standard_EXPORT     Standard_Boolean Failed() const;
  //! Resets error counter to zero <br>
  Standard_EXPORT     void Reset() ;
  //! Raises OSD_Error <br>
  Standard_EXPORT     void Perror() ;
  //! Returns error number if 'Failed' is TRUE. <br>
  Standard_EXPORT     Standard_Integer Error() const;





protected:





private:



#ifdef WNT
Standard_Address myId;
#else
Standard_Integer myId;
#endif
Standard_Address myAddress;
TCollection_AsciiString myName;
Standard_Integer mySize;
OSD_Error myError;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
