//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PeopleUnit.h"
#include "AboutMEUnit.h"
#include "ClearOxyUnit.h"
#include "CofeMachinesUnit.h"
#include "CondicionersUnit.h"
#include "DataModuleUnit.h"
#include "DustClearUnit.h"
#include "ElectroBritvasUnit.h"
#include "FensUnit.h"
#include "GraphicUnit.h"
#include "IronsUnit.h"
#include "MainUnitForm.h"
#include "MicrowaveUnit.h"
#include "RefregiratorsUnit.h"
#include "ShopDB_project.h"
#include "VanishMachineUnit.h"
#include "VitajkiUnit.h"
#include "WaterHeatUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPeopleForm *PeopleForm;
//---------------------------------------------------------------------------
__fastcall TPeopleForm::TPeopleForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPeopleForm::ButtonGraphicClick(TObject *Sender)
{
		GraphicForm->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TPeopleForm::ButtonCloseClick(TObject *Sender)
{
		PeopleForm->Close();
}
//---------------------------------------------------------------------------
