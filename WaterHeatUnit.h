//---------------------------------------------------------------------------

#ifndef WaterHeatUnitH
#define WaterHeatUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TWaterHeatForm : public TForm
{
__published:	// IDE-managed Components
	TButton *CloseFormButton;
	TDBNavigator *DBNavigator1;
	TDBGrid *CofeMachines;
	void __fastcall CloseFormButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TWaterHeatForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWaterHeatForm *WaterHeatForm;
//---------------------------------------------------------------------------
#endif
