//---------------------------------------------------------------------------

#ifndef MainUnitFormH
#define MainUnitFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.FileCtrl.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Τΰιλ;
	TMenuItem *PrintData;
	TMenuItem *Exit;
	TMenuItem *N2;
	TMenuItem *AboutME;
	TMenuItem *N1;
	TMenuItem *N3;
	TMenuItem *Vitajki;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N8;
	TMenuItem *N9;
	TMenuItem *N10;
	TMenuItem *N11;
	TMenuItem *N12;
	TMenuItem *N13;
	TStaticText *StaticText1;
	TEdit *EditSearch;
	TLabel *Label1;
	TGroupBox *GroupBox1;
	TRadioButton *RB_Name;
	TRadioButton *RB_Type;
	TMenuItem *N14;
	TMenuItem *N15;
	TDBGrid *DBGrid1;
	TMenuItem *SQL1;
	TMenuItem *SQL01;
	TMenuItem *SQL11;
	TMenuItem *N31;
	TMenuItem *N41;
	TMenuItem *N51;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall AboutMEClick(TObject *Sender);
	void __fastcall WaterHearClick(TObject *Sender);
	void __fastcall VitajkiClick(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall N7Click(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
	void __fastcall N9Click(TObject *Sender);
	void __fastcall N10Click(TObject *Sender);
	void __fastcall N11Click(TObject *Sender);
	void __fastcall N12Click(TObject *Sender);
	void __fastcall N13Click(TObject *Sender);
	void __fastcall EditSearchChange(TObject *Sender);
	void __fastcall RB_NameClick(TObject *Sender);
	void __fastcall RB_PriceClick(TObject *Sender);
	void __fastcall RB_TypeClick(TObject *Sender);
	void __fastcall Button_GraphicClick(TObject *Sender);
	void __fastcall N15Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall SQL01Click(TObject *Sender);
	void __fastcall SQL11Click(TObject *Sender);
	void __fastcall N31Click(TObject *Sender);
	void __fastcall N41Click(TObject *Sender);
	void __fastcall N51Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
