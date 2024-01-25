//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MicrowaveUnit.h"
#include "AboutMEUnit.h"
#include "CofeMachinesUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "MainUnitForm.h"
#include "ShopDB_project.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMicrowaveForm *MicrowaveForm;
//---------------------------------------------------------------------------
__fastcall TMicrowaveForm::TMicrowaveForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMicrowaveForm::CloseFormButtonClick(TObject *Sender)
{
		MicrowaveForm->Close();
}
//---------------------------------------------------------------------------
