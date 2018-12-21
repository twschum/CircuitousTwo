;------------------------------------------------------------
; HWiNFO Frequency measure
;
; [Variables]
; sensorIdFreq=0xf0000400
; sensorInstanceFreq=0x0
; entryIdFreq=0x100007f
;
; ; optional
; minFreq=0
; maxFreq=5000
;
; @includeSensorFreq="#@#hwinfo_sensor_freqency.inc

[mUnitFreq]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdFreq#
HWiNFOSensorInstance=#sensorInstanceFreq#
HWiNFOEntryId=#entryIdFreq#
HWiNFOType=Units

[mCurrentFreq]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdFreq#
HWiNFOSensorInstance=#sensorInstanceFreq#
HWiNFOEntryId=#entryIdFreq#
HWiNFOType=CurrentValue
MinValue=#minFreq#
MaxValue=#maxFreq#

[mLowestFreq]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdFreq#
HWiNFOSensorInstance=#sensorInstanceFreq#
HWiNFOEntryId=#entryIdFreq#
HWiNFOType=MinimumValue
MinValue=#minFreq#
MaxValue=#maxFreq#

[mHighestFreq]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdFreq#
HWiNFOSensorInstance=#sensorInstanceFreq#
HWiNFOEntryId=#entryIdFreq#
HWiNFOType=MaximumValue
MinValue=#minFreq#
MaxValue=#maxFreq#

[mAverageFreq]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#sensorIdFreq#
HWiNFOSensorInstance=#sensorInstanceFreq#
HWiNFOEntryId=#entryIdFreq#
HWiNFOType=AverageValue
MinValue=#minFreq#
MaxValue=#maxFreq#
