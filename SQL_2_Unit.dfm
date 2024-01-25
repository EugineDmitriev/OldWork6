object SQL_2_Form: TSQL_2_Form
  Left = 0
  Top = 0
  Caption = #1055#1086#1080#1089#1082' '#1085#1072#1080#1084#1077#1085#1100#1096#1077#1081' '#1094#1077#1085#1099
  ClientHeight = 474
  ClientWidth = 638
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
    Left = 438
    Top = 99
    Width = 163
    Height = 23
    Caption = #1062#1077#1085#1072' '#1084#1077#1085#1100#1096#1077' '#1095#1077#1084':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ButtonClose: TButton
    Left = 520
    Top = 424
    Width = 97
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 0
    OnClick = ButtonCloseClick
  end
  object DBGrid1: TDBGrid
    Left = 16
    Top = 16
    Width = 393
    Height = 441
    DataSource = DataMain.SQL_2_DataSource
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = #1058#1080#1087'_'
        Width = 160
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1055#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100
        Width = 85
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1043#1072#1088#1072#1085#1090#1080#1103
        Width = 45
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1062#1077#1085#1072
        Width = 60
        Visible = True
      end>
  end
  object Edit_Price: TEdit
    Left = 488
    Top = 128
    Width = 65
    Height = 21
    Alignment = taRightJustify
    TabOrder = 2
    Text = '999999'
    OnKeyPress = Edit_PriceKeyPress
  end
end
