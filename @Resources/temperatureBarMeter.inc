[mColorConditionTemp]
Measure=Calc
Formula=mCurrentTemp >= #dangerTemp# ? 2 : (mCurrentTemp >= #warnTemp# ? 1 : -1)
IfAboveValue=1
IfAboveAction=[!SetOption bar BarColor "#dangerColor#"][!UpdateMeter *][!Redraw]
IfEqualValue=1
IfEqualAction=[!SetOption bar BarColor "#warningColor#"][!UpdateMeter *][!Redraw]
IfBelowValue=0
IfBelowAction=[!SetOption bar BarColor "#normalColor#"][!UpdateMeter *][!Redraw]
DynamicVariables=1

[mainText]
X=(#barXzero#+#edging#)
Y=0
Meter=STRING
MeterStyle=mainTextStyle | mainTextCommon | mainTextValue
MeasureName=mCurrentTemp
StringAlign=Left

[mainTextUnit]
X=R
Y=0
Meter=STRING
MeterStyle=mainTextStyle | mainTextCommon
MeasureName=mUnitTemp
UpdateDivider=-1
StringAlign=Left
StringCase=None

[barBox]
Meter=Shape
MeterStyle=barBoxCommon
Shape=Rectangle 0,#barBoxY#,#barW#,#barBoxH# | Fill Color #pieBgColor# |  Stroke Color #pieColor#

[bar]
Meter=Bar
MeterStyle=barCommon
MeasureName=mCurrentTemp

[barTicks]
Meter=Shape
MeasureName=mAverageTemp
MeterStyle=barTickCommon
ShapeStyle=Fill Color #pieColor# | Stroke Color #pieColor#
Shape=Rectangle (#barScalingFactorTemp#*([mLowestTemp:]-#minTemp#)),#barTickY#,#barTickW#,#barTickH# | Extend ShapeStyle
Shape2=Rectangle (#barScalingFactorTemp#*([mAverageTemp:]-#minTemp#)),#barTickY#,#barTickW#,#barTickH# | Extend ShapeStyle
Shape3=Rectangle (#barScalingFactorTemp#*([mHighestTemp:]-#minTemp#)),#barTickY#,#barTickW#,#barTickH# | Extend ShapeStyle

[subText]
X=(#barXzero#+#edging#)
Y=3R
Meter=STRING
MeterStyle=subTextStyle | subTextCommon
MeasureName=mLowestTemp
MeasureName2=mAverageTemp
MeasureName3=mHighestTemp
ClipString=0
Text="min: %1 | avg: %2 | max: %3"
