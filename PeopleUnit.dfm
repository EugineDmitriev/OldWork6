object PeopleForm: TPeopleForm
  Left = 0
  Top = 0
  Caption = #1057#1086#1090#1088#1091#1076#1085#1080#1082#1080
  ClientHeight = 408
  ClientWidth = 771
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
    Left = 8
    Top = 302
    Width = 240
    Height = 25
    DataSource = DataMain.PeopleDataSource
    TabOrder = 0
  end
  object MainGrid: TDBGrid
    Left = 8
    Top = 39
    Width = 417
    Height = 257
    DataSource = DataMain.PeopleDataSource
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 16
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1060#1048#1054
        Width = 128
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1053#1072#1079#1074#1072#1085#1080#1077' '#1076#1086#1083#1078#1085#1086#1089#1090#1080
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1047#1072#1088#1087#1083#1072#1090#1072
        Width = 90
        Visible = True
      end>
  end
  object DBGrid1: TDBGrid
    Left = 515
    Top = 39
    Width = 182
    Height = 257
    DataSource = DataMain.WorkDataSource
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
        Width = 16
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1053#1072#1079#1074#1072#1085#1080#1077
        Width = 128
        Visible = True
      end>
  end
  object ButtonGraphic: TButton
    Left = 336
    Top = 352
    Width = 105
    Height = 33
    Caption = #1043#1088#1072#1092#1080#1082
    TabOrder = 3
    OnClick = ButtonGraphicClick
  end
  object ButtonClose: TButton
    Left = 624
    Top = 352
    Width = 99
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 4
    OnClick = ButtonCloseClick
  end
  object DBNavigator2: TDBNavigator
    Left = 483
    Top = 302
    Width = 240
    Height = 25
    DataSource = DataMain.WorkDataSource
    TabOrder = 5
  end
end
