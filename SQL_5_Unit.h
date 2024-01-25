//---------------------------------------------------------------------------

#ifndef SQL_5_UnitH
#define SQL_5_UnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSQL_5_Form : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TEdit *Edit_X;
	TButton *ButtonClose;
	void __fastcall ButtonCloseClick(TObject *Sender);
	void __fastcall Edit_XKeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TSQL_5_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSQL_5_Form *SQL_5_Form;
//---------------------------------------------------------------------------
#endif
