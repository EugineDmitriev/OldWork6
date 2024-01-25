//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "WaterHeatUnit.h"
#include "AboutMEUnit.h"
#include "DataModuleUnit.h"
#include "MainUnitForm.h"
#include "ShopDB_project.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWaterHeatForm *WaterHeatForm;
//---------------------------------------------------------------------------
__fastcall TWaterHeatForm::TWaterHeatForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TWaterHeatForm::CloseFormButtonClick(TObject *Sender)
{
	 WaterHeatForm->Close();
}
//---------------------------------------------------------------------------

