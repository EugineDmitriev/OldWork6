//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnitForm.h"
#include "AboutMEUnit.h"
#include "ShopDB_project.h"
#include "DataModuleUnit.h"
#include "WaterHeatUnit.h"
#include "VitajkiUnit.h"
#include "CondicionersUnit.h"
#include "CofeMachinesUnit.h"
#include "MicrowaveUnit.h"
#include "ClearOxyUnit.h"
#include "DustClearUnit.h"
#include "VanishMachineUnit.h"
#include "IronsUnit.h"
#include "FensUnit.h"
#include "RefregiratorsUnit.h"
#include "ElectroBritvasUnit.h"
#include "GraphicUnit.h"
#include "PeopleUnit.h"
#include "SQL_0_Unit.h"
#include "SQL_1_Unit.h"
#include "SQL_2_Unit.h"
#include "SQL_3_Unit.h"
#include "SQL_4_Unit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitClick(TObject *Sender)
{
	   Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AboutMEClick(TObject *Sender)
{
		FormAboutME->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WaterHearClick(TObject *Sender)
{
	     WaterHeatForm->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::VitajkiClick(TObject *Sender)
{
	 VitajkiForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
		CondicionersForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
		CofeMachinesForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
		MicrowaveForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
		ClearOxyForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
		DustClearForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
		VanishMachineForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
		IronsForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
		FensForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
		RefregiratorsForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N13Click(TObject *Sender)
{
		ElectroBritvasForm->ShowModal();
}
//---------------------------------------------------------------------------








void __fastcall TForm1::EditSearchChange(TObject *Sender)
{
		DataMain->All->Locate("Производитель", EditSearch->Text, TLocateOptions() << TLocateOption::loPartialKey);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RB_NameClick(TObject *Sender)
{
	  DataMain->All->IndexFieldNames = "Производитель";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RB_PriceClick(TObject *Sender)
{
	   DataMain->All->IndexFieldNames = "Цена";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RB_TypeClick(TObject *Sender)
{
        DataMain->All->IndexFieldNames = "Тип";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button_GraphicClick(TObject *Sender)
{
		GraphicForm->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N15Click(TObject *Sender)
{
		PeopleForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
		Application->Restore();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SQL01Click(TObject *Sender)
{
	   SQL_0_Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SQL11Click(TObject *Sender)
{
		SQL_1_Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N31Click(TObject *Sender)
{
		SQL_2_Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N41Click(TObject *Sender)
{
		 SQL_3_Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N51Click(TObject *Sender)
{
		  SQL_4_Form->ShowModal();
}
//---------------------------------------------------------------------------

