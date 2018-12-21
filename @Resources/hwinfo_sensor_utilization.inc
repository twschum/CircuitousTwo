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
MinValue=0
MaxValue=100

[mLowestUtil]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdUtil#
HWiNFOSensorInstance=#sensorInstanceUtil#
HWiNFOEntryId=#entryIdUtil#
HWiNFOType=MinimumValue
MinValue=0
MaxValue=100

[mHighestUtil]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdUtil#
HWiNFOSensorInstance=#sensorInstanceUtil#
HWiNFOEntryId=#entryIdUtil#
HWiNFOType=MaximumValue
MinValue=0
MaxValue=100

[mAverageUtil]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdUtil#
HWiNFOSensorInstance=#sensorInstanceUtil#
HWiNFOEntryId=#entryIdUtil#
HWiNFOType=AverageValue
MinValue=0
MaxValue=100
