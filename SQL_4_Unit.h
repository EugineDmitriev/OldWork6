//---------------------------------------------------------------------------

#ifndef SQL_4_UnitH
#define SQL_4_UnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TSQL_4_Form : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TButton *ButtonClose;
	void __fastcall ButtonCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSQL_4_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSQL_4_Form *SQL_4_Form;
//---------------------------------------------------------------------------
#endif
