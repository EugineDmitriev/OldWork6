//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ElectroBritvasUnit.h"
#include "AboutMEUnit.h"
#include "ClearOxyUnit.h"
#include "CofeMachinesUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "DustClearUnit.h"
#include "FensUnit.h"
#include "IronsUnit.h"
#include "MainUnitForm.h"
#include "MicrowaveUnit.h"
#include "RefregiratorsUnit.h"
#include "ShopDB_project.h"
#include "VanishMachineUnit.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TElectroBritvasForm *ElectroBritvasForm;
//---------------------------------------------------------------------------
__fastcall TElectroBritvasForm::TElectroBritvasForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TElectroBritvasForm::CloseFormButtonClick(TObject *Sender)
{
		ElectroBritvasForm->Close();
}
//---------------------------------------------------------------------------
