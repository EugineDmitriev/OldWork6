//---------------------------------------------------------------------------

#ifndef SQL_0_UnitH
#define SQL_0_UnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSQL_0_Form : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TEdit *Edit_Price;
	TLabel *Label1;
	TButton *ButtonClose;
	void __fastcall Edit_PriceKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ButtonCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSQL_0_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSQL_0_Form *SQL_0_Form;
//---------------------------------------------------------------------------
#endif
