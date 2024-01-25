//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CofeMachinesUnit.h"
#include "AboutMEUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "MainUnitForm.h"
#include "ShopDB_project.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCofeMachinesForm *CofeMachinesForm;
//---------------------------------------------------------------------------
__fastcall TCofeMachinesForm::TCofeMachinesForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCofeMachinesForm::CloseFormButtonClick(TObject *Sender)
{
	     CofeMachinesForm->Close();
}
//---------------------------------------------------------------------------
