# WIPER CONTROLLING SYSTEM 

*INTRODUCTION* : 
A windscreen wiper or windshield wiper is a device used to remove rain, snow, ice and debris from a windscreen or windshield. Almost all motor vehicles, including cars, trucks, train lcomotives, watercraft with a cabin and some aircraft, are equipped with such wipers, which are usually a legal requirement. A wiper generally consists of a metal arm, pivoting at one end and with a long rubber blade attached to the other. The arm is powered by a motor, often an electric motor, although pneumatic power is also used in some vehicles. The blade is swing back and forth over the glass, pushing water or other precipitation from ts surface. The speed is normally adjustable, with several continuous speeds and often one or more intermittent settings. Most automobiles use two synchronized radial type amms, while many commercial vehicles use one or more photographs arms. 

*DESCRIPTION* : This project is about wiper control system this is mainly used in different types of vehicles this is used to clean the air drops on the mirror when the driver is riding a car if unfortunately it is raining so it is difficult to see the road and drive the car, so in this case he will use the wipers to clean the air drops on the mirror so it is easy to drive the car.

*REQUIREMENTS*

High Level Requirements

* It shall LOCK THE CAR
* It shall UNLOCK THE CAR
* It shall WIPER SYSTEM ON
* It shall WIPER SYSTEM OFF 

 Low level Requirements
 
* If the User Button is pressed ONCE, ON LED RED
* If the User Button is pressed TWICE, OFF LED RED
* If the User Button is pressed Three Times, ON BLUE, GREEN, ORANGE
* if the User Button is pressed Four times, ON ORANGE, GREEN, BLUE

*ARCHITECTURE*

![re pdf  1](https://user-images.githubusercontent.com/101093201/168021788-f5f2dfcd-9fe0-4df8-b566-c2e96a9e1268.png)
![re pdf -2](https://user-images.githubusercontent.com/101093201/168021805-7d1460f0-e41d-4034-8d45-32992f0da835.png)
![re pdf - 3](https://user-images.githubusercontent.com/101093201/168021818-600086b9-7974-43c5-8f48-64d831ca742c.png)

*SORT ANALYSIS*

![Document1 - Microsoft Word 11-05-2022 12_08_40](https://user-images.githubusercontent.com/101093201/168023092-d75b93f5-2898-4412-8458-495c8e1ac6e5.png)

*Test plan and output*

### Test plan is created and verified

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Engine On | USER BUTTON PRESS ONCE  | Shall Engine on  | Shall Engine on  | 
| 02 | Engine Off | USER BUTTON PRESS TWICE | Shall Engine Off The car |  Shall Engine Off The car | 
| 03 | Wiper On | USER BUTTON PRESS THREE TIMES | Shall Wiper On In clock wise dirction   | Shall Wiper On in clock wise direction  |
| 04 | Wiper Off | USER BUTTON PRESS FOUR TIMES | Shall Wiper Off in anti clock wise direction | Shall Wiper Off in anti clock wise direction   |
| 05 | ENCRYPTION | 1 OR 2 0R 3 0R 4 | encrypted data for 1/2/3/4 | encrypted data for 1/2/3/4 |


## LOW LEVEL TEST PLAN

| Test ID (for LOCK)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Engine On | USER BUTTON PRESS ONCE  | Shall ON all LED's as per ENCRYPTION | Shall ON all LED's as per ENCRYPTION | ✅ |
| 02 | Check for Engine Off | USER BUTTON PRESS TWICE  | Shall OFF all LED's as per ENCRYPTION | Shall OFF all LED's as per ENCRYPTION | ✅ |
| 03 | Check for Wiper On | USER BUTTON PRESS THREE TIMES | Shall ON LED's ONCE clockwise as per ENCRYPTION |  Shall ON LED's ONCE clockwise as per ENCRYPTION | ✅ |
| 04 | Check for Wiper Off | USER BUTTON PRESS FOUR TIMES | Shall ON LED's once anti-clockwise as per ENCRYPTION |  Shall ON LED's once anti-clockwise as per ENCRYPTION | ✅ |
| 05 | Check for ENCRYPTION | 1/2/3/4  | 1244/1843/6789/5478 | 1244/1843/6789/5478 | ✅ |
| 06 | Check for btn_press() | counts no of button press  | 1/2/3/4 | 1/2/3/4 | ✅ |



