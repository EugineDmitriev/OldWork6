//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SQL_5_Unit.h"
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
#include "SQL_0_Unit.h"
#include "SQL_1_Unit.h"
#include "SQL_2_Unit.h"
#include "SQL_3_Unit.h"
#include "SQL_4_Unit.h"
#include "VanishMachineUnit.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSQL_5_Form *SQL_5_Form;
//---------------------------------------------------------------------------
__fastcall TSQL_5_Form::TSQL_5_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSQL_5_Form::ButtonCloseClick(TObject *Sender)
{
		SQL_5_Form->Close();
}
//---------------------------------------------------------------------------
void __fastcall TSQL_5_Form::Edit_XKeyPress(TObject *Sender, System::WideChar &Key)

{
		if((Edit_X->Text.Length() == 0) || (int(Key) != 13)) {
			  return;
		  }
		  DataMain->Query_SQL_5->Active = false;
		  DataMain->Query_SQL_5->Parameters->Items[0]->Value = StrToFloat (Edit_X->Text);
		  DataMain->Query_SQL_5->Active = true;
}
//---------------------------------------------------------------------------
