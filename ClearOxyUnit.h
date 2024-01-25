//---------------------------------------------------------------------------

#ifndef ClearOxyUnitH
#define ClearOxyUnitH
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
class TClearOxyForm : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *CofeMachines;
	TDBNavigator *DBNavigator1;
	TButton *CloseFormButton;
	void __fastcall CloseFormButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TClearOxyForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TClearOxyForm *ClearOxyForm;
//---------------------------------------------------------------------------
#endif
