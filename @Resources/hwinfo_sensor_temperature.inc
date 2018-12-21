;------------------------------------------------------------
; HWiNFO Temperature measure
;
; [Variables]
; sensorIdTemp=0xf0000400
; sensorInstanceTemp=0x0
; entryIdTemp=0x100007f
;
; @includeSensorTemp="#@#hwinfo_sensor_temperature.inc

[mUnitTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdTemp#
HWiNFOSensorInstance=#sensorInstanceTemp#
HWiNFOEntryId=#entryIdTemp#
HWiNFOType=Units

[mCurrentTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdTemp#
HWiNFOSensorInstance=#sensorInstanceTemp#
HWiNFOEntryId=#entryIdTemp#
HWiNFOType=CurrentValue
MinValue=#minTemp#
MaxValue=#maxTemp#

[mLowestTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdTemp#
HWiNFOSensorInstance=#sensorInstanceTemp#
HWiNFOEntryId=#entryIdTemp#
HWiNFOType=MinimumValue
MinValue=#minTemp#
MaxValue=#maxTemp#

[mHighestTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdTemp#
HWiNFOSensorInstance=#sensorInstanceTemp#
HWiNFOEntryId=#entryIdTemp#
HWiNFOType=MaximumValue
MinValue=#minTemp#
MaxValue=#maxTemp#

[mAverageTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdTemp#
HWiNFOSensorInstance=#sensorInstanceTemp#
HWiNFOEntryId=#entryIdTemp#
HWiNFOType=AverageValue
MinValue=#minTemp#
MaxValue=#maxTemp#

[mColorConditionTemp]
Measure=Calc
Formula=mTempCurrent >= #dangerTemp# ? 2 : (mTempCurrent >= #warnTemp# ? 1 : -1)
IfAboveValue=1
IfAboveAction=[!SetOption bar BarColor "#dangerColor#"][!UpdateMeter *][!Redraw]
IfEqualValue=1
IfEqualAction=[!SetOption bar BarColor "#warningColor#"][!UpdateMeter *][!Redraw]
IfBelowValue=0
IfBelowAction=[!SetOption bar BarColor "#normalColor#"][!UpdateMeter *][!Redraw]

