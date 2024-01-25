object GraphicForm: TGraphicForm
  Left = 0
  Top = 0
  Caption = #1043#1088#1072#1092#1080#1082
  ClientHeight = 457
  ClientWidth = 694
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBChart1: TDBChart
    Left = 8
    Top = 8
    Width = 659
    Height = 394
    Title.Text.Strings = (
      #1043#1088#1072#1092#1080#1082' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1086#1074)
    TabOrder = 0
    PrintMargins = (
      15
      20
      15
      20)
    ColorPaletteIndex = 13
    object Series1: TBarSeries
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Visible = False
      DataSource = DataMain.People
      SeriesColor = clBlue
      Title = #1043#1088#1072#1092#1080#1082' '#1079#1072#1088#1087#1083#1072#1090' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1086#1074
      XLabelsSource = #1053#1072#1079#1074#1072#1085#1080#1077' '#1076#1086#1083#1078#1085#1086#1089#1090#1080
      XValues.Name = 'X'
      XValues.Order = loAscending
      XValues.ValueSource = #1044#1086#1083#1078#1085#1086#1089#1090#1100
      YValues.Name = 'Bar'
      YValues.Order = loNone
      YValues.ValueSource = #1047#1072#1088#1087#1083#1072#1090#1072
    end
  end
  object ButtonClose: TButton
    Left = 568
    Top = 408
    Width = 99
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 1
    OnClick = ButtonCloseClick
  end
end
