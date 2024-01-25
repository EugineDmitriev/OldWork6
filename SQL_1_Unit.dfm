object SQL_1_Form: TSQL_1_Form
  Left = 0
  Top = 0
  Caption = #1057#1091#1084#1084#1072' '#1079#1072#1088#1087#1083#1072#1090
  ClientHeight = 167
  ClientWidth = 234
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
    Left = 32
    Top = 24
    Width = 175
    Height = 23
    Caption = #1057#1091#1084#1084#1072' '#1074#1089#1077#1093' '#1079#1072#1088#1087#1083#1072#1090
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 48
    Top = 53
    Width = 137
    Height = 41
    DataSource = DataMain.SQL_1_DataSource
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object ButtonClose: TButton
    Left = 72
    Top = 122
    Width = 97
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 1
    OnClick = ButtonCloseClick
  end
end
