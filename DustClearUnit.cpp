//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DustClearUnit.h"
#include "AboutMEUnit.h"
#include "ClearOxyUnit.h"
#include "CofeMachinesUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "MainUnitForm.h"
#include "MicrowaveUnit.h"
#include "ShopDB_project.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDustClearForm *DustClearForm;
//---------------------------------------------------------------------------
__fastcall TDustClearForm::TDustClearForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDustClearForm::CloseFormButtonClick(TObject *Sender)
{
		DustClearForm->Close();
}
//---------------------------------------------------------------------------
