//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RefregiratorsUnit.h"
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
#include "ShopDB_project.h"
#include "VanishMachineUnit.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRefregiratorsForm *RefregiratorsForm;
//---------------------------------------------------------------------------
__fastcall TRefregiratorsForm::TRefregiratorsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRefregiratorsForm::CloseFormButtonClick(TObject *Sender)
{
		RefregiratorsForm->Close();
}
//---------------------------------------------------------------------------
