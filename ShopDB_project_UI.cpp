//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("SQL_0_Unit.cpp", SQL_0_Form);
USEFORM("SQL_1_Unit.cpp", SQL_1_Form);
USEFORM("PeopleUnit.cpp", PeopleForm);
USEFORM("RefregiratorsUnit.cpp", RefregiratorsForm);
USEFORM("VanishMachineUnit.cpp", VanishMachineForm);
USEFORM("VitajkiUnit.cpp", VitajkiForm);
USEFORM("WaterHeatUnit.cpp", WaterHeatForm);
USEFORM("SQL_2_Unit.cpp", SQL_2_Form);
USEFORM("SQL_3_Unit.cpp", SQL_3_Form);
USEFORM("SQL_4_Unit.cpp", SQL_4_Form);
USEFORM("CondicionersUnit.cpp", CondicionersForm);
USEFORM("DataModuleUnit.cpp", DataMain); /* TDataModule: File Type */
USEFORM("DustClearUnit.cpp", DustClearForm);
USEFORM("AboutMEUnit.cpp", FormAboutME);
USEFORM("ClearOxyUnit.cpp", ClearOxyForm);
USEFORM("CofeMachinesUnit.cpp", CofeMachinesForm);
USEFORM("IronsUnit.cpp", IronsForm);
USEFORM("MainUnitForm.cpp", Form1);
USEFORM("MicrowaveUnit.cpp", MicrowaveForm);
USEFORM("ElectroBritvasUnit.cpp", ElectroBritvasForm);
USEFORM("FensUnit.cpp", FensForm);
USEFORM("GraphicUnit.cpp", GraphicForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TFormAboutME), &FormAboutME);
		Application->CreateForm(__classid(TDataMain), &DataMain);
		Application->CreateForm(__classid(TWaterHeatForm), &WaterHeatForm);
		Application->CreateForm(__classid(TVitajkiForm), &VitajkiForm);
		Application->CreateForm(__classid(TCondicionersForm), &CondicionersForm);
		Application->CreateForm(__classid(TCofeMachinesForm), &CofeMachinesForm);
		Application->CreateForm(__classid(TMicrowaveForm), &MicrowaveForm);
		Application->CreateForm(__classid(TClearOxyForm), &ClearOxyForm);
		Application->CreateForm(__classid(TDustClearForm), &DustClearForm);
		Application->CreateForm(__classid(TVanishMachineForm), &VanishMachineForm);
		Application->CreateForm(__classid(TIronsForm), &IronsForm);
		Application->CreateForm(__classid(TFensForm), &FensForm);
		Application->CreateForm(__classid(TRefregiratorsForm), &RefregiratorsForm);
		Application->CreateForm(__classid(TElectroBritvasForm), &ElectroBritvasForm);
		Application->CreateForm(__classid(TGraphicForm), &GraphicForm);
		Application->CreateForm(__classid(TPeopleForm), &PeopleForm);
		Application->CreateForm(__classid(TSQL_0_Form), &SQL_0_Form);
		Application->CreateForm(__classid(TSQL_1_Form), &SQL_1_Form);
		Application->CreateForm(__classid(TSQL_2_Form), &SQL_2_Form);
		Application->CreateForm(__classid(TSQL_3_Form), &SQL_3_Form);
		Application->CreateForm(__classid(TSQL_4_Form), &SQL_4_Form);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
