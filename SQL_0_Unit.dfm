object SQL_0_Form: TSQL_0_Form
  Left = 0
  Top = 0
  Caption = #1047#1072#1088#1087#1083#1072#1090#1072' '#1087#1086' '#1079#1072#1076#1072#1085#1085#1086#1084#1091' '#1079#1085#1072#1095#1077#1085#1080#1102
  ClientHeight = 249
  ClientWidth = 584
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
    Left = 384
    Top = 80
    Width = 114
    Height = 13
    Caption = #1047#1072#1088#1087#1083#1072#1090#1072' '#1073#1086#1083#1100#1096#1077' '#1095#1077#1084':'
  end
  object DBGrid1: TDBGrid
    Left = 24
    Top = 24
    Width = 337
    Height = 193
    DataSource = DataMain.SQL_0_DataSource
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
        Width = 15
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1060#1048#1054
        Width = 130
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
  object Edit_Price: TEdit
    Left = 504
    Top = 77
    Width = 65
    Height = 21
    Alignment = taRightJustify
    TabOrder = 1
    Text = '10000'
    OnKeyPress = Edit_PriceKeyPress
  end
  object ButtonClose: TButton
    Left = 448
    Top = 192
    Width = 97
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 2
    OnClick = ButtonCloseClick
  end
end
