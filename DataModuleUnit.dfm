object DataMain: TDataMain
  OldCreateOrder = False
  Height = 602
  Width = 1121
  object MainDBconect: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=ShopD' +
      'B32'
    LoginPrompt = False
    Left = 40
    Top = 24
  end
  object WaterHeat: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1042#1086#1076#1086#1085#1072#1075#1088#1077#1074#1072#1090#1077#1083#1080
    Left = 296
    Top = 24
  end
  object Vitajki: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1042#1099#1090#1103#1078#1082#1080
    Left = 352
    Top = 24
  end
  object Condicioners: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1050#1086#1085#1076#1080#1094#1080#1086#1085#1077#1088#1099
    Left = 400
    Top = 24
  end
  object CofeMachines: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1050#1086#1092#1077#1074#1072#1088#1082#1080' '#1080' '#1082#1086#1092#1077#1084#1072#1096#1080#1085#1099
    Left = 472
    Top = 24
  end
  object Microwave: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1052#1080#1082#1088#1086#1074#1086#1083#1085#1086#1074#1099#1077' '#1087#1077#1095#1080
    Left = 544
    Top = 24
  end
  object ClearOxy: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1054#1095#1080#1089#1090#1080#1090#1077#1083#1080' '#1080' '#1091#1074#1083#1072#1078#1085#1080#1090#1077#1083#1080' '#1074#1086#1079#1076#1091#1093#1072
    Left = 600
    Top = 24
  end
  object DustClear: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1055#1099#1083#1077#1089#1086#1089#1099
    Left = 656
    Top = 24
  end
  object VanishMachine: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1057#1090#1080#1088#1072#1083#1100#1085#1099#1077' '#1084#1072#1096#1080#1085#1099
    Left = 720
    Top = 24
  end
  object Irons: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1059#1090#1102#1075#1080
    Left = 776
    Top = 24
  end
  object Fens: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1060#1077#1085#1099
    Left = 816
    Top = 24
  end
  object Refregirators: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1061#1086#1083#1086#1076#1080#1083#1100#1085#1080#1082#1080
    Left = 872
    Top = 24
  end
  object ElectroBritvas: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1069#1083#1077#1082#1090#1088#1086#1073#1088#1080#1090#1074#1099
    Left = 944
    Top = 24
  end
  object WaterHeatDataSource: TDataSource
    DataSet = WaterHeat
    Left = 280
    Top = 88
  end
  object VitajkiDataSource: TDataSource
    DataSet = Vitajki
    Left = 344
    Top = 136
  end
  object CondicionersDataSource: TDataSource
    DataSet = Condicioners
    Left = 400
    Top = 88
  end
  object CofeMachinesDataSource: TDataSource
    DataSet = CofeMachines
    Left = 464
    Top = 136
  end
  object MicrowaveDataSource: TDataSource
    DataSet = Microwave
    Left = 544
    Top = 96
  end
  object ClearOxyDataSource: TDataSource
    DataSet = ClearOxy
    Left = 600
    Top = 144
  end
  object DustClearDataSource: TDataSource
    DataSet = DustClear
    Left = 656
    Top = 96
  end
  object VanishMachineDataSource: TDataSource
    DataSet = VanishMachine
    Left = 720
    Top = 144
  end
  object ElectroBritvasDataSource: TDataSource
    DataSet = ElectroBritvas
    Left = 936
    Top = 144
  end
  object FensDataSource: TDataSource
    DataSet = Fens
    Left = 816
    Top = 152
  end
  object RefregiratorsDataSource: TDataSource
    DataSet = Refregirators
    Left = 872
    Top = 96
  end
  object IronsDataSource: TDataSource
    DataSet = Irons
    Left = 768
    Top = 96
  end
  object All: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1042#1089#1077#1058#1086#1074#1072#1088#1099
    Left = 40
    Top = 208
    object AllПроизводитель: TWideStringField
      FieldName = #1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100
      Size = 255
    end
    object AllГарантия: TWideStringField
      FieldName = #1043#1072#1088#1072#1085#1090#1080#1103
      Size = 255
    end
    object AllЦена: TWideStringField
      FieldName = #1062#1077#1085#1072
      Size = 255
    end
    object AllТип_: TStringField
      FieldKind = fkLookup
      FieldName = #1058#1080#1087'_'
      LookupDataSet = List
      LookupKeyFields = 'ID'
      LookupResultField = #1058#1080#1087
      KeyFields = #1058#1080#1087
      Lookup = True
    end
    object AllТип: TBCDField
      FieldName = #1058#1080#1087
      Precision = 19
    end
  end
  object AllDataSource: TDataSource
    DataSet = All
    Left = 40
    Top = 272
  end
  object PeopleDataSource: TDataSource
    DataSet = People
    Left = 368
    Top = 376
  end
  object Work: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1044#1086#1083#1078#1085#1086#1089#1090#1080
    Left = 480
    Top = 312
  end
  object WorkDataSource: TDataSource
    DataSet = Work
    Left = 480
    Top = 376
  end
  object People: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    MasterSource = WorkDataSource
    TableName = #1057#1086#1090#1088#1091#1076#1085#1080#1082#1080
    Left = 368
    Top = 304
    object PeopleID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object PeopleФИО: TWideStringField
      FieldName = #1060#1048#1054
      Size = 255
    end
    object PeopleНазваниедолжности: TStringField
      FieldKind = fkLookup
      FieldName = #1053#1072#1079#1074#1072#1085#1080#1077' '#1076#1086#1083#1078#1085#1086#1089#1090#1080
      LookupDataSet = Work
      LookupKeyFields = 'ID'
      LookupResultField = #1053#1072#1079#1074#1072#1085#1080#1077
      KeyFields = #1044#1086#1083#1078#1085#1086#1089#1090#1100
      Lookup = True
    end
    object PeopleДолжность: TIntegerField
      FieldName = #1044#1086#1083#1078#1085#1086#1089#1090#1100
    end
    object PeopleЗарплата: TBCDField
      FieldName = #1047#1072#1088#1087#1083#1072#1090#1072
      Precision = 19
    end
  end
  object List: TADOTable
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    TableName = #1057#1087#1080#1089#1086#1082
    Left = 120
    Top = 216
  end
  object ListDataSource: TDataSource
    DataSet = List
    Left = 120
    Top = 280
  end
  object SQL_0_DataSource: TDataSource
    DataSet = Query_SQL_0
    Left = 664
    Top = 360
  end
  object Query_SQL_0: TADOQuery
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    DataSource = PeopleDataSource
    Parameters = <
      item
        Name = 'PRICE'
        DataType = ftFloat
        Size = -1
        Value = 10000.000000000000000000
      end>
    SQL.Strings = (
      'select *'
      'from '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080
      'where '#1047#1072#1088#1087#1083#1072#1090#1072' >= :PRICE')
    Left = 672
    Top = 304
    object Query_SQL_0ID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object Query_SQL_0ФИО: TWideStringField
      FieldName = #1060#1048#1054
      Size = 255
    end
    object Query_SQL_0Должность: TIntegerField
      FieldName = #1044#1086#1083#1078#1085#1086#1089#1090#1100
    end
    object Query_SQL_0Зарплата: TBCDField
      FieldName = #1047#1072#1088#1087#1083#1072#1090#1072
      Precision = 19
    end
    object Query_SQL_0Должность_: TStringField
      FieldKind = fkLookup
      FieldName = #1044#1086#1083#1078#1085#1086#1089#1090#1100'_'
      LookupDataSet = Work
      LookupKeyFields = 'ID'
      LookupResultField = #1053#1072#1079#1074#1072#1085#1080#1077
      KeyFields = #1044#1086#1083#1078#1085#1086#1089#1090#1100
      Lookup = True
    end
  end
  object SQL_1_DataSource: TDataSource
    DataSet = Query_SQL_1
    Left = 768
    Top = 360
  end
  object Query_SQL_1: TADOQuery
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    DataSource = PeopleDataSource
    Parameters = <>
    SQL.Strings = (
      'select sum('#1047#1072#1088#1087#1083#1072#1090#1072') as '#1047#1072#1088#1087#1083#1072#1090#1099' from '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080)
    Left = 768
    Top = 304
  end
  object SQL_2_DataSource: TDataSource
    DataSet = Query_SQL_2
    Left = 864
    Top = 368
  end
  object Query_SQL_2: TADOQuery
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    DataSource = AllDataSource
    Parameters = <
      item
        Name = 'PRICE'
        DataType = ftInteger
        Size = -1
        Value = 999999
      end>
    SQL.Strings = (
      'select * from '#1042#1089#1077#1058#1086#1074#1072#1088#1099
      'where ['#1062#1077#1085#1072'] <= :PRICE')
    Left = 864
    Top = 304
    object Query_SQL_2Производитель: TWideStringField
      FieldName = #1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100
      Size = 255
    end
    object Query_SQL_2Гарантия: TWideStringField
      FieldName = #1043#1072#1088#1072#1085#1090#1080#1103
      Size = 255
    end
    object Query_SQL_2Цена: TWideStringField
      FieldName = #1062#1077#1085#1072
      Size = 255
    end
    object Query_SQL_2Тип: TBCDField
      FieldName = #1058#1080#1087
      Precision = 19
    end
    object Query_SQL_2Тип_: TStringField
      FieldKind = fkLookup
      FieldName = #1058#1080#1087'_'
      LookupDataSet = List
      LookupKeyFields = 'ID'
      LookupResultField = #1058#1080#1087
      KeyFields = #1058#1080#1087
      Lookup = True
    end
  end
  object SQL_3_DataSource: TDataSource
    DataSet = Query_SQL_3
    Left = 968
    Top = 376
  end
  object Query_SQL_3: TADOQuery
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    DataSource = AllDataSource
    Parameters = <>
    SQL.Strings = (
      'select sum('#1062#1077#1085#1072') as '#1057#1090#1086#1080#1084#1086#1089#1090#1100' from '#1042#1089#1077#1058#1086#1074#1072#1088#1099)
    Left = 968
    Top = 304
  end
  object All_SQL_DataSource: TDataSource
    DataSet = All
    Left = 120
    Top = 496
  end
  object All_SQL: TADOQuery
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    DataSource = SQL_3_DataSource
    Parameters = <>
    SQL.Strings = (
      
        'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM '#1042#1086#1076#1086#1085#1072#1075#1088#1077 +
        #1074#1072#1090#1077#1083#1080
      'UNION'
      'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM '#1042#1099#1090#1103#1078#1082#1080
      'UNION'
      
        'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM '#1050#1086#1085#1076#1080#1094#1080#1086#1085 +
        #1077#1088#1099
      'UNION'
      
        'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM ['#1050#1086#1092#1077#1074#1072#1088#1082 +
        #1080' '#1080' '#1082#1086#1092#1077#1084#1072#1096#1080#1085#1099']'
      'UNION'
      
        'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM ['#1052#1080#1082#1088#1086#1074#1086#1083 +
        #1085#1086#1074#1099#1077' '#1087#1077#1095#1080']'
      'UNION'
      
        'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM ['#1054#1095#1080#1089#1090#1080#1090#1077 +
        #1083#1080' '#1080' '#1091#1074#1083#1072#1078#1085#1080#1090#1077#1083#1080' '#1074#1086#1079#1076#1091#1093#1072']'
      'UNION'
      'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM '#1055#1099#1083#1077#1089#1086#1089#1099
      'UNION'
      
        'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM ['#1057#1090#1080#1088#1072#1083#1100#1085 +
        #1099#1077' '#1084#1072#1096#1080#1085#1099']'
      'UNION'
      'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM '#1059#1090#1102#1075#1080
      'UNION'
      'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM '#1060#1077#1085#1099
      'UNION'
      
        'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM '#1061#1086#1083#1086#1076#1080#1083#1100#1085 +
        #1080#1082#1080
      'UNION'
      
        'SELECT ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'], ['#1058#1080#1087'] FROM '#1069#1083#1077#1082#1090#1088#1086#1073#1088 +
        #1080#1090#1074#1099
      
        'UNION SELECT ['#1058#1080#1087'], ['#1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100'], ['#1043#1072#1088#1072#1085#1090#1080#1103'], ['#1062#1077#1085#1072'] FROM '#1058#1086#1074 +
        #1072#1088#1099'_1;')
    Left = 120
    Top = 432
  end
  object SQL_4_DataSource: TDataSource
    DataSet = Query_SQL_4
    Left = 1064
    Top = 384
  end
  object Query_SQL_4: TADOQuery
    Active = True
    Connection = MainDBconect
    CursorType = ctStatic
    DataSource = PeopleDataSource
    Parameters = <>
    SQL.Strings = (
      'select * from '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080
      'order by '#1047#1072#1088#1087#1083#1072#1090#1072' asc'
      '')
    Left = 1064
    Top = 312
    object Query_SQL_4ID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object Query_SQL_4ФИО: TWideStringField
      FieldName = #1060#1048#1054
      Size = 255
    end
    object Query_SQL_4Должность: TIntegerField
      FieldName = #1044#1086#1083#1078#1085#1086#1089#1090#1100
    end
    object Query_SQL_4Зарплата: TBCDField
      FieldName = #1047#1072#1088#1087#1083#1072#1090#1072
      Precision = 19
    end
    object Query_SQL_4Должность_: TStringField
      FieldKind = fkLookup
      FieldName = #1044#1086#1083#1078#1085#1086#1089#1090#1100'_'
      LookupDataSet = Work
      LookupKeyFields = 'ID'
      LookupResultField = #1053#1072#1079#1074#1072#1085#1080#1077
      KeyFields = #1044#1086#1083#1078#1085#1086#1089#1090#1100
      Lookup = True
    end
  end
end
