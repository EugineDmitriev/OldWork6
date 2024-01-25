//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "VanishMachineUnit.h"
#include "AboutMEUnit.h"
#include "ClearOxyUnit.h"
#include "CofeMachinesUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "DustClearUnit.h"
#include "MainUnitForm.h"
#include "MicrowaveUnit.h"
#include "ShopDB_project.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVanishMachineForm *VanishMachineForm;
//---------------------------------------------------------------------------
__fastcall TVanishMachineForm::TVanishMachineForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TVanishMachineForm::CloseFormButtonClick(TObject *Sender)
{
		VanishMachineForm->Close();
}
//---------------------------------------------------------------------------
