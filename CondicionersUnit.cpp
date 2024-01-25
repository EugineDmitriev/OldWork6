//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CondicionersUnit.h"
#include "AboutMEUnit.h"
#include "DataModuleUnit.h"
#include "MainUnitForm.h"
#include "ShopDB_project.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCondicionersForm *CondicionersForm;
//---------------------------------------------------------------------------
__fastcall TCondicionersForm::TCondicionersForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCondicionersForm::CloseFormButtonClick(TObject *Sender)
{
           CondicionersForm->Close();
}
//---------------------------------------------------------------------------
