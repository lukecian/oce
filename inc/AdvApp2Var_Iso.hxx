// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_Iso_HeaderFile
#define _AdvApp2Var_Iso_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <GeomAbs_IsoType.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_TColStd_HArray2OfReal.hxx>
#include <AdvApp2Var_EvaluatorFunc2Var.hxx>
class TColStd_HArray1OfReal;
class TColStd_HArray2OfReal;
class AdvApp2Var_Context;
class AdvApp2Var_Node;



//! used to store constraints on a line U = Ui or V = Vj
class AdvApp2Var_Iso 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AdvApp2Var_Iso();
  
  Standard_EXPORT AdvApp2Var_Iso(const GeomAbs_IsoType type, const Standard_Integer iu, const Standard_Integer iv);
  
  Standard_EXPORT AdvApp2Var_Iso(const GeomAbs_IsoType type, const Standard_Real cte, const Standard_Real Ufirst, const Standard_Real Ulast, const Standard_Real Vfirst, const Standard_Real Vlast, const Standard_Integer pos, const Standard_Integer iu, const Standard_Integer iv);
  
  Standard_EXPORT   Standard_Boolean IsApproximated()  const;
  
  Standard_EXPORT   Standard_Boolean HasResult()  const;
  
  Standard_EXPORT   void MakeApprox (const AdvApp2Var_Context& Conditions, const Standard_Real a, const Standard_Real b, const Standard_Real c, const Standard_Real d, const AdvApp2Var_EvaluatorFunc2Var& func, AdvApp2Var_Node& NodeBegin, AdvApp2Var_Node& NodeEnd) ;
  
  Standard_EXPORT   void ChangeDomain (const Standard_Real a, const Standard_Real b) ;
  
  Standard_EXPORT   void ChangeDomain (const Standard_Real a, const Standard_Real b, const Standard_Real c, const Standard_Real d) ;
  
  Standard_EXPORT   void SetConstante (const Standard_Real newcte) ;
  
  Standard_EXPORT   void SetPosition (const Standard_Integer newpos) ;
  
  Standard_EXPORT   void ResetApprox() ;
  
  Standard_EXPORT   void OverwriteApprox() ;
  
  Standard_EXPORT   GeomAbs_IsoType Type()  const;
  
  Standard_EXPORT   Standard_Real Constante()  const;
  
  Standard_EXPORT   Standard_Real T0()  const;
  
  Standard_EXPORT   Standard_Real T1()  const;
  
  Standard_EXPORT   Standard_Real U0()  const;
  
  Standard_EXPORT   Standard_Real U1()  const;
  
  Standard_EXPORT   Standard_Real V0()  const;
  
  Standard_EXPORT   Standard_Real V1()  const;
  
  Standard_EXPORT   Standard_Integer UOrder()  const;
  
  Standard_EXPORT   Standard_Integer VOrder()  const;
  
  Standard_EXPORT   Standard_Integer Position()  const;
  
  Standard_EXPORT   Standard_Integer NbCoeff()  const;
  
  Standard_EXPORT  const  Handle(TColStd_HArray1OfReal)& Polynom()  const;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) SomTab()  const;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) DifTab()  const;
  
  Standard_EXPORT   Handle(TColStd_HArray2OfReal) MaxErrors()  const;
  
  Standard_EXPORT   Handle(TColStd_HArray2OfReal) MoyErrors()  const;




protected:





private:

  
  Standard_EXPORT AdvApp2Var_Iso(const AdvApp2Var_Iso& Other);


  GeomAbs_IsoType myType;
  Standard_Real myConstPar;
  Standard_Real myU0;
  Standard_Real myU1;
  Standard_Real myV0;
  Standard_Real myV1;
  Standard_Integer myPosition;
  Standard_Integer myExtremOrder;
  Standard_Integer myDerivOrder;
  Standard_Integer myNbCoeff;
  Standard_Boolean myApprIsDone;
  Standard_Boolean myHasResult;
  Handle(TColStd_HArray1OfReal) myEquation;
  Handle(TColStd_HArray2OfReal) myMaxErrors;
  Handle(TColStd_HArray2OfReal) myMoyErrors;
  Handle(TColStd_HArray1OfReal) mySomTab;
  Handle(TColStd_HArray1OfReal) myDifTab;


};







#endif // _AdvApp2Var_Iso_HeaderFile
