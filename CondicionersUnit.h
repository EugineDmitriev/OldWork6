//---------------------------------------------------------------------------

#ifndef CondicionersUnitH
#define CondicionersUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TCondicionersForm : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TButton *CloseFormButton;
	TDBGrid *CofeMachines;
	void __fastcall CloseFormButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCondicionersForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCondicionersForm *CondicionersForm;
//---------------------------------------------------------------------------
#endif
