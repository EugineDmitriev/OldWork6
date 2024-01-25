//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SQL_3_Unit.h"
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
#include "VanishMachineUnit.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSQL_3_Form *SQL_3_Form;
//---------------------------------------------------------------------------
__fastcall TSQL_3_Form::TSQL_3_Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSQL_3_Form::ButtonCloseClick(TObject *Sender)
{
		SQL_3_Form->Close();
}
//---------------------------------------------------------------------------
