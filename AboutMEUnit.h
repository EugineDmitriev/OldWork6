//---------------------------------------------------------------------------

#ifndef AboutMEUnitH
#define AboutMEUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormAboutME : public TForm
{
__published:	// IDE-managed Components
	TStaticText *StaticText1;
	TStaticText *StaticText2;
	TStaticText *StaticText3;
	TStaticText *StaticText4;
	TStaticText *StaticText5;
private:	// User declarations
public:		// User declarations
	__fastcall TFormAboutME(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormAboutME *FormAboutME;
//---------------------------------------------------------------------------
#endif
