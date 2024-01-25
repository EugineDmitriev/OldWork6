//---------------------------------------------------------------------------

#ifndef SQL_1_UnitH
#define SQL_1_UnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSQL_1_Form : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TLabel *Label1;
	TButton *ButtonClose;
	void __fastcall ButtonCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSQL_1_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSQL_1_Form *SQL_1_Form;
//---------------------------------------------------------------------------
#endif
