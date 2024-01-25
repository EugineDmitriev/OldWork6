object SQL_4_Form: TSQL_4_Form
  Left = 0
  Top = 0
  Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1082#1072' '#1079#1072#1088#1087#1083#1072#1090
  ClientHeight = 353
  ClientWidth = 512
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 48
    Top = 40
    Width = 409
    Height = 185
    DataSource = DataMain.SQL_4_DataSource
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Width = 20
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1060#1048#1054
        Width = 160
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1044#1086#1083#1078#1085#1086#1089#1090#1100'_'
        Width = 90
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1047#1072#1088#1087#1083#1072#1090#1072
        Width = 60
        Visible = True
      end>
  end
  object ButtonClose: TButton
    Left = 376
    Top = 296
    Width = 97
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 1
    OnClick = ButtonCloseClick
  end
end
