# BICOM SYSTEM

## Description 
 
  Bicom system is the extension of the unidirectional RKE to bidirectional ke system.
  This system is used for checking window status,checkinh alarm status,battery information and door status.

 To understand this concept clearly we use led concept.
* For checking window status all the leds on.
* For checking alarm status all the leds will off.
* For car battery information  all the leds will on and works in clockwise direction.
* For door status all the leds will  works in anticlockwise direction.  


## Identifying Features
* If we click Button  for once  the  system will check window status.
* If we click Button  for twice the system will check the alarm status  .
* If we click Button for three times the system will get the battery information.
* If we click Button for Four times the  it will  check the door status .


## Requirements

### **High Level Requirements**
 
|ID|DESCRIPTION|
|---|---
|HLR01|It shall check window status the|
|HLR02|It shall check alarm status|
|HLR03|It shall get the battery information|
|HLR04|It shall check the door status|

### **Low Level Requirements**

|ID|DESCRIPTION|
|---|---
|LLR01|The system should  check window status the  when blue switch is pressed once|
|LLR02|The system should  check alarm status when the blue switch is pressed twice|
|LLR03|The system should  It shall get the battery information when the blue switch is pressed three times|
|LLR04|The system should check the door status when the blue switch is pressed four times|

## SWAOT
![SWAOT](https://user-images.githubusercontent.com/88649955/157680427-c99aeb46-9a22-4a40-b566-3ec8670d67ac.JPG)
 
 
 ## 5W's & 1H
![bicom](https://user-images.githubusercontent.com/88649955/157691122-58a41787-9fcd-4cff-8ba2-341ae007baab.jpg).

## BLOCK DIAGRAM

![Bicom Block Diagram-3](https://user-images.githubusercontent.com/77672209/157699372-c2c46b9c-183c-48c9-a13f-2cedcc41c549.jpg)

# STRUCTURAL DESIGN

![Bicom Structural Diagram](https://user-images.githubusercontent.com/77672209/157809444-391d6458-78db-4b10-b538-59bac9ff62b4.jpg)

# BEHAVIOURAL DESIGN

![Bicom Behavioral Diagram](https://user-images.githubusercontent.com/77672209/157809756-2a6c34e8-d1f4-41b9-97cc-49461be53411.jpg)

# **TESTPLAN AND OUTPUT**

## **HIGH LEVEL TEST PLAN**

|Test_ID|Description|Input|Expected O/P|Actual O/P|Status|
---|---|---|---|---|---|
|TID_01|Window Status|Press Button"1 Time"|Pass|Pass|DONE :white_check_mark:|
|TID_02|Alarm Status|Press Button"2 Times"|Pass|Pass|DONE :white_check_mark:|
|TID_03|Car Battery Info|Press Button"3 Times"|Pass|Pass|DONE :white_check_mark:|
|TID_04|Door Status|Press Button"4 Times"|Pass|Pass|DONE :white_check_mark:|


## **LOW LEVEL TEST PLAN**

|Test_ID|Description|Input|Expected O/P|Actual O/P|Status|
---|---|---|---|---|---|
|TID_01|Window Status|Press Button"1 Time"|All LED's "On"|All LED's "On"|DONE :white_check_mark:|
|TID_02|Alarm Status|Press Button"2 Times"|All LED's "Off"|All LED's "Off"|DONE :white_check_mark:|
|TID_03|Car Battery Info|Press Button"3 Times"|All LED's "On Clockwise"|All LED's "On Clockwise"|DONE :white_check_mark:|
|TID_04|Door Status|Press Button"4 Times"|All LED's "On Anti-Clockwise"|All LED's "On Anti-Clockwise"|DONE :white_check_mark:|











