;------------------------------------------------------------
; HWiNFO Wattage measure
;
; [Variables]
; sensorIdWatt=0xf0000400
; sensorInstanceWatt=0x0
; entryIdWatt=0x100007f
;
; ; optional
; minWatt=0
; maxWatt=250
;
; @includeSensorWatt="#@#hwinfo_sensor_wattage.inc

[mUnitWatt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdWatt#
HWiNFOSensorInstance=#sensorInstanceWatt#
HWiNFOEntryId=#entryIdWatt#
HWiNFOType=Units

[mCurrentWatt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdWatt#
HWiNFOSensorInstance=#sensorInstanceWatt#
HWiNFOEntryId=#entryIdWatt#
HWiNFOType=CurrentValue
MinValue=#minWatt#
MaxValue=#maxWatt#

[mLowestWatt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdWatt#
HWiNFOSensorInstance=#sensorInstanceWatt#
HWiNFOEntryId=#entryIdWatt#
HWiNFOType=MinimumValue
MinValue=#minWatt#
MaxValue=#maxWatt#

[mHighestWatt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdWatt#
HWiNFOSensorInstance=#sensorInstanceWatt#
HWiNFOEntryId=#entryIdWatt#
HWiNFOType=MaximumValue
MinValue=#minWatt#
MaxValue=#maxWatt#

[mAverageWatt]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdWatt#
HWiNFOSensorInstance=#sensorInstanceWatt#
HWiNFOEntryId=#entryIdWatt#
HWiNFOType=AverageValue
MinValue=#minWatt#
MaxValue=#maxWatt#
