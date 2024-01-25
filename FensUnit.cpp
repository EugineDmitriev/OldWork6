//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FensUnit.h"
#include "AboutMEUnit.h"
#include "ClearOxyUnit.h"
#include "CofeMachinesUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "DustClearUnit.h"
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
TFensForm *FensForm;
//---------------------------------------------------------------------------
__fastcall TFensForm::TFensForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFensForm::CloseFormButtonClick(TObject *Sender)
{
		FensForm->Close();
}
//---------------------------------------------------------------------------
