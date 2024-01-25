//---------------------------------------------------------------------------

#ifndef SQL_3_UnitH
#define SQL_3_UnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSQL_3_Form : public TForm
{
__published:	// IDE-managed Components
	TButton *ButtonClose;
	TDBGrid *DBGrid1;
	TLabel *Label1;
	void __fastcall ButtonCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSQL_3_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSQL_3_Form *SQL_3_Form;
//---------------------------------------------------------------------------
#endif
