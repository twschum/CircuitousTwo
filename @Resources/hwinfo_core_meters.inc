[Bg]
; base for the whole skin
Meter=IMAGE
X=0
Y=0
W=((#radius#*12)+(#edging#*2))
H=((#radius#*2)+(#edging#*2))
;SolidColor=0,0,0,1
SolidColor=20,30,34,255

; Utilization meter
[innerEdgeUtil]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | innerEdgeCommon | innerEdgeStyle

[pieBgUtil]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | pieBgCommon

[outerEdgeUtil]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | outerEdgeCommon

[pieUtil]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | pieCommon
MeasureName=mCurrentUtil

[pieInnerTextUtil]
Meter=STRING
MeterStyle=innerTextCommon
MeasureName=mCurrentUtil
Text="%1%"

; Frequency meter
[innerEdgeFreq]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | innerEdgeCommon | innerEdgeStyle
X=(2*#radius#)+(#edging#)
Y=#edging#

[pieBgFreq]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | pieBgCommon

[outerEdgeFreq]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | outerEdgeCommon

[pieFreq]
Meter=ROUNDLINE
MeterStyle=roundlineCommon | pieCommon
MeasureName=mCurrentFreq

[pieInnerTextFreq]
Meter=STRING
MeterStyle=innerTextCommon
MeasureName=mCurrentFreq
Scale=1000.0
Text="%1#CRLF#GHz"

; Temperature meter
[mainTextValue]
Text="core #coreN#: %1 "

@includeTempBar="#@#temperatureBarMeter.inc"
