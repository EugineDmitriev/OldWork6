//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ClearOxyUnit.h"
#include "AboutMEUnit.h"
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
TClearOxyForm *ClearOxyForm;
//---------------------------------------------------------------------------
__fastcall TClearOxyForm::TClearOxyForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TClearOxyForm::CloseFormButtonClick(TObject *Sender)
{
		ClearOxyForm->Close();
}
//---------------------------------------------------------------------------
