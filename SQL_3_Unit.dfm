object SQL_3_Form: TSQL_3_Form
  Left = 0
  Top = 0
  Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1082#1072' '#1079#1072#1088#1087#1083#1072#1090
  ClientHeight = 222
  ClientWidth = 255
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 24
    Width = 211
    Height = 23
    Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100' '#1074#1089#1077#1093' '#1090#1086#1074#1072#1088#1086#1074
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ButtonClose: TButton
    Left = 72
    Top = 160
    Width = 97
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 0
    OnClick = ButtonCloseClick
  end
  object DBGrid1: TDBGrid
    Left = 80
    Top = 80
    Width = 89
    Height = 49
    DataSource = DataMain.SQL_3_DataSource
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
end
