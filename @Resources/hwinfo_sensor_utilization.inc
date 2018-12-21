;------------------------------------------------------------
; HWiNFO Utilization measure
;
; [Variables]
; sensorIdUtil=0xf0000400
; sensorInstanceUtil=0x0
; entryIdUtil=0x100007f
;
; ; optional
; minUtil=0
; maxUtil=5000
;
; @includeSensorUtil="#@#hwinfo_sensor_utilization.inc

[mCurrentUtil]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdUtil#
HWiNFOSensorInstance=#sensorInstanceUtil#
HWiNFOEntryId=#entryIdUtil#
HWiNFOType=CurrentValue

[mLowestUtil]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdUtil#
HWiNFOSensorInstance=#sensorInstanceUtil#
HWiNFOEntryId=#entryIdUtil#
HWiNFOType=MinimumValue

[mHighestUtil]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdUtil#
HWiNFOSensorInstance=#sensorInstanceUtil#
HWiNFOEntryId=#entryIdUtil#
HWiNFOType=MaximumValue

[mAverageUtil]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdUtil#
HWiNFOSensorInstance=#sensorInstanceUtil#
HWiNFOEntryId=#entryIdUtil#
HWiNFOType=AverageValue
