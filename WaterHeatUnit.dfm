object WaterHeatForm: TWaterHeatForm
  Left = 0
  Top = 0
  Caption = #1042#1086#1076#1086#1085#1072#1075#1088#1077#1074#1072#1090#1077#1083#1080
  ClientHeight = 467
  ClientWidth = 653
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object CloseFormButton: TButton
    Left = 432
    Top = 384
    Width = 187
    Height = 73
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 0
    OnClick = CloseFormButtonClick
  end
  object DBNavigator1: TDBNavigator
    Left = 27
    Top = 296
    Width = 240
    Height = 25
    DataSource = DataMain.WaterHeatDataSource
    TabOrder = 1
  end
  object CofeMachines: TDBGrid
    Left = 8
    Top = 24
    Width = 489
    Height = 257
    DataSource = DataMain.WaterHeatDataSource
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
