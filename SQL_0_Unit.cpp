//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SQL_0_Unit.h"
#include "AboutMEUnit.h"
#include "ClearOxyUnit.h"
#include "CofeMachinesUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "DustClearUnit.h"
#include "ElectroBritvasUnit.h"
#include "FensUnit.h"
#include "GraphicUnit.h"
#include "IronsUnit.h"
#include "MainUnitForm.h"
#include "MicrowaveUnit.h"
#include "PeopleUnit.h"
#include "RefregiratorsUnit.h"
#include "ShopDB_project.h"
#include "VanishMachineUnit.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSQL_0_Form *SQL_0_Form;
//---------------------------------------------------------------------------
__fastcall TSQL_0_Form::TSQL_0_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------





void __fastcall TSQL_0_Form::Edit_PriceKeyPress(TObject *Sender, System::WideChar &Key)

{
		 if((Edit_Price->Text.Length() == 0) || (int(Key) != 13)) {
			  return;
		  }
		  DataMain->Query_SQL_0->Active = false;
		  DataMain->Query_SQL_0->Parameters->Items[0]->Value = StrToFloat (Edit_Price->Text);
		  DataMain->Query_SQL_0->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TSQL_0_Form::ButtonCloseClick(TObject *Sender)
{
		SQL_0_Form->Close();
}
//---------------------------------------------------------------------------

