object CofeMachinesForm: TCofeMachinesForm
  Left = 0
  Top = 0
  Caption = #1050#1086#1092#1077#1074#1072#1088#1082#1080' '#1080' '#1082#1086#1092#1077#1084#1072#1096#1080#1085#1099
  ClientHeight = 487
  ClientWidth = 664
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBNavigator1: TDBNavigator
    Left = 27
    Top = 296
    Width = 240
    Height = 25
    DataSource = DataMain.CofeMachinesDataSource
    TabOrder = 0
  end
  object CloseFormButton: TButton
    Left = 432
    Top = 366
    Width = 187
    Height = 73
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 1
    OnClick = CloseFormButtonClick
  end
  object CofeMachines: TDBGrid
    Left = 8
    Top = 24
    Width = 489
    Height = 257
    DataSource = DataMain.CofeMachinesDataSource
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 33
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100
        Width = 88
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1043#1072#1088#1072#1085#1090#1080#1103
        Width = 66
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1062#1077#1085#1072
        Width = 58
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1058#1080#1087
        Width = 204
        Visible = True
      end>
  end
end
