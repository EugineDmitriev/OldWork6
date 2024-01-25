//---------------------------------------------------------------------------

#ifndef DataModuleUnitH
#define DataModuleUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
//---------------------------------------------------------------------------
class TDataMain : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *MainDBconect;
	TADOTable *WaterHeat;
	TADOTable *Vitajki;
	TADOTable *Condicioners;
	TADOTable *CofeMachines;
	TADOTable *Microwave;
	TADOTable *ClearOxy;
	TADOTable *DustClear;
	TADOTable *VanishMachine;
	TADOTable *Irons;
	TADOTable *Fens;
	TADOTable *Refregirators;
	TADOTable *ElectroBritvas;
	TDataSource *WaterHeatDataSource;
	TDataSource *VitajkiDataSource;
	TDataSource *CondicionersDataSource;
	TDataSource *CofeMachinesDataSource;
	TDataSource *MicrowaveDataSource;
	TDataSource *ClearOxyDataSource;
	TDataSource *DustClearDataSource;
	TDataSource *VanishMachineDataSource;
	TDataSource *ElectroBritvasDataSource;
	TDataSource *FensDataSource;
	TDataSource *RefregiratorsDataSource;
	TDataSource *IronsDataSource;
	TADOTable *All;
	TDataSource *AllDataSource;
	TDataSource *PeopleDataSource;
	TADOTable *Work;
	TDataSource *WorkDataSource;
	TADOTable *People;
	TAutoIncField *PeopleID;
	TWideStringField *People���;
	TIntegerField *People���������;
	TBCDField *People��������;
	TStringField *People�����������������;
	TADOTable *List;
	TDataSource *ListDataSource;
	TWideStringField *All�������������;
	TWideStringField *All��������;
	TWideStringField *All����;
	TStringField *All���_;
	TBCDField *All���;
	TDataSource *SQL_0_DataSource;
	TADOQuery *Query_SQL_0;
	TDataSource *SQL_1_DataSource;
	TADOQuery *Query_SQL_1;
	TDataSource *SQL_2_DataSource;
	TADOQuery *Query_SQL_2;
	TWideStringField *Query_SQL_2�������������;
	TWideStringField *Query_SQL_2��������;
	TWideStringField *Query_SQL_2����;
	TBCDField *Query_SQL_2���;
	TStringField *Query_SQL_2���_;
	TDataSource *SQL_3_DataSource;
	TADOQuery *Query_SQL_3;
	TAutoIncField *Query_SQL_0ID;
	TWideStringField *Query_SQL_0���;
	TIntegerField *Query_SQL_0���������;
	TBCDField *Query_SQL_0��������;
	TStringField *Query_SQL_0���������_;
	TDataSource *All_SQL_DataSource;
	TADOQuery *All_SQL;
	TDataSource *SQL_4_DataSource;
	TADOQuery *Query_SQL_4;
	TAutoIncField *Query_SQL_4ID;
	TWideStringField *Query_SQL_4���;
	TIntegerField *Query_SQL_4���������;
	TBCDField *Query_SQL_4��������;
	TStringField *Query_SQL_4���������_;
private:	// User declarations
public:		// User declarations
	__fastcall TDataMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataMain *DataMain;
//---------------------------------------------------------------------------
#endif
