# Remote Keyless Entry System

## Description
In this project we want to Demonostrate   Remote key less(entry).This system is used for locking,unlocking,alaram activation/deactivation and light approach any one occurs.
to understand this concept clearly we use led concept.
* For locking all the leds on.
* For unlocking all the leds will off.
* For Alaram all the leds will on and works in clockwise direction.
* For approaach all the leds will  works in anticlockwise direction.  


## Identifying Features
* If we click Button  for once  the door will lock
* If we click Button  for Twice door wiil unlock.
* If we click Button for three times it will activate the alaram.
* If we click Button for Four times the  it will  activate if appraoch light .

## Requirements

### **High Level Requirements**
 
|ID|DESCRIPTION|
|---|---
|HLR01|It shall lock the door|
|HLR02|It shall unclock the door|
|HLR03|It shall activate/deactivate the alarm|
|HLR04|It shall approach the light|

### **Low Level Requirements**

|ID|DESCRIPTION|
|---|---
|LLR01|The system should lock the door when blue switch is pressed once|
|LLR02|The system should unlock the door when the blue switch is pressed twice|
|LLR03|The system should activate the alarm when the blue switch is pressed three times |
|LLR04|The system should approach the light when the blue switch is pressed four times |

## SWOT
![SWAOT](https://user-images.githubusercontent.com/88649955/157680427-c99aeb46-9a22-4a40-b566-3ec8670d67ac.JPG).

## 5W's & 1H
![5W 1H](https://user-images.githubusercontent.com/88649955/157690554-da8ae9de-a74f-46e2-b968-8b0971c9c203.jpg).
## Architecture

### Block Diagram
![Block diagram](https://user-images.githubusercontent.com/98881131/157912626-98c60d4c-fe4d-4214-8077-cafe62e8f2ff.png)




### Behavioral Diagram

![image](https://user-images.githubusercontent.com/46986941/157895082-b0d00e0e-e787-4d1e-b731-093e3c25fd33.png)

### Structural diagram

![image](https://user-images.githubusercontent.com/46986941/157892965-de839614-291e-4d7c-8ef7-73d6994904c8.png)

## **TESTPLAN AND OUTPUT**

### **HIGH LEVEL TEST PLAN**

|Test_ID|Description|Input|Expected O/P|Actual O/P|Status|
---|---|---|---|---|---|
|TID_01|Car Lock|Press Button"1 Time"|Lock|Lock|DONE :white_check_mark:|
|TID_02|Car Unlock|Press Button"2 Times"|Unlock|Unlock|DONE :white_check_mark:|
|TID_03|Alarm Activation/Deactivation|Press Button"3 Times"|Alarm Activation/Deactivation|Alarm Activation/Deactivation|DONE :white_check_mark:|
|TID_04|Approach Light|Press Button"4 Times"|Approch Light|Approch Light|DONE :white_check_mark:|


### **LOW LEVEL TEST PLAN**

|Test_ID|Description|Input|Expected O/P|Actual O/P|Status|
---|---|---|---|---|---|
|TID_01|Car Lock|Press Button"1 Time"|All LED's "On"|All LED's "On"|DONE :white_check_mark:|
|TID_02|Car Unlock|Press Button"2 Times"|All LED's "Off"|All LED's "Off"|DONE :white_check_mark:|
|TID_03|Alarm Activation/Deactivation|Press Button"3 Times"|All LED's "On Clockwise"|All LED's "On clockwise"|DONE :white_check_mark:|
|TID_04|Approach Light|Press Button"4 Times"|All LED's "On Anti-Clockwise"|All LED's "On Anti-Clockwise"|DONE :white_check_mark:|



