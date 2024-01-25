//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "IronsUnit.h"
#include "AboutMEUnit.h"
#include "ClearOxyUnit.h"
#include "CofeMachinesUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "DustClearUnit.h"
#include "MainUnitForm.h"
#include "MicrowaveUnit.h"
#include "ShopDB_project.h"
#include "VanishMachineUnit.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIronsForm *IronsForm;
//---------------------------------------------------------------------------
__fastcall TIronsForm::TIronsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TIronsForm::CloseFormButtonClick(TObject *Sender)
{
		IronsForm->Close();
}
//---------------------------------------------------------------------------
