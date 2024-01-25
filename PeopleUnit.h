//---------------------------------------------------------------------------

#ifndef PeopleUnitH
#define PeopleUnitH
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
class TPeopleForm : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TDBGrid *MainGrid;
	TDBGrid *DBGrid1;
	TButton *ButtonGraphic;
	TButton *ButtonClose;
	TDBNavigator *DBNavigator2;
	void __fastcall ButtonGraphicClick(TObject *Sender);
	void __fastcall ButtonCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPeopleForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPeopleForm *PeopleForm;
//---------------------------------------------------------------------------
#endif
