;------------------------------------------------------------
; HWiNFO Voltage measure
;
; [Variables]
; sensorIdVolt=0xf0000400
; sensorInstanceVolt=0x0
; entryIdVolt=0x100007f
;
; ; optional
; minVolt=0
; maxVolt=2
;
; @includeSensorVolt="#@#hwinfo_sensor_voltage.inc

[mUnitVolt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdVolt#
HWiNFOSensorInstance=#sensorInstanceVolt#
HWiNFOEntryId=#entryIdVolt#
HWiNFOType=Units

[mCurrentVolt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdVolt#
HWiNFOSensorInstance=#sensorInstanceVolt#
HWiNFOEntryId=#entryIdVolt#
HWiNFOType=CurrentValue
MinValue=#minVolt#
MaxValue=#maxVolt#

[mLowestVolt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdVolt#
HWiNFOSensorInstance=#sensorInstanceVolt#
HWiNFOEntryId=#entryIdVolt#
HWiNFOType=MinimumValue
MinValue=#minVolt#
MaxValue=#maxVolt#

[mHighestVolt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdVolt#
HWiNFOSensorInstance=#sensorInstanceVolt#
HWiNFOEntryId=#entryIdVolt#
HWiNFOType=MaximumValue
MinValue=#minVolt#
MaxValue=#maxVolt#

[mAverageVolt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdVolt#
HWiNFOSensorInstance=#sensorInstanceVolt#
HWiNFOEntryId=#entryIdVolt#
HWiNFOType=AverageValue
MinValue=#minVolt#
MaxValue=#maxVolt#
