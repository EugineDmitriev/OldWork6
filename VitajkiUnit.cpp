//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "VitajkiUnit.h"
#include "AboutMEUnit.h"
#include "DataModuleUnit.h"
#include "MainUnitForm.h"
#include "ShopDB_project.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVitajkiForm *VitajkiForm;
//---------------------------------------------------------------------------
__fastcall TVitajkiForm::TVitajkiForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TVitajkiForm::CloseFormButtonClick(TObject *Sender)
{
		   VitajkiForm->Close();
}
//---------------------------------------------------------------------------
