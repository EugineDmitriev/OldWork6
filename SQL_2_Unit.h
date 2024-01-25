//---------------------------------------------------------------------------

#ifndef SQL_2_UnitH
#define SQL_2_UnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSQL_2_Form : public TForm
{
__published:	// IDE-managed Components
	TButton *ButtonClose;
	TDBGrid *DBGrid1;
	TEdit *Edit_Price;
	TLabel *Label1;
	void __fastcall ButtonCloseClick(TObject *Sender);
	void __fastcall Edit_PriceKeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TSQL_2_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSQL_2_Form *SQL_2_Form;
//---------------------------------------------------------------------------
#endif
