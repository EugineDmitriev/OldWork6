object SQL_5_Form: TSQL_5_Form
  Left = 0
  Top = 0
  Caption = #1055#1088#1077#1084#1080#1080
  ClientHeight = 509
  ClientWidth = 661
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
    Left = 32
    Top = 88
    Width = 433
    Height = 225
    DataSource = DataMain.SQL_5_DataSource
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Edit_X: TEdit
    Left = 504
    Top = 176
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '1'
    OnKeyPress = Edit_XKeyPress
  end
  object ButtonClose: TButton
    Left = 520
    Top = 424
    Width = 97
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 2
    OnClick = ButtonCloseClick
  end
end
