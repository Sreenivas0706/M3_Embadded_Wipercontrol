# Test plan and output

### Test plan is created and verified

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Engine On | USER BUTTON PRESS ONCE  | Shall Engine on  | Shall Engine on  | 
| 02 | Engine Off | USER BUTTON PRESS TWICE | Shall Engine Off  |  Shall Engine Off | 
| 03 | Wipers On | USER BUTTON PRESS THREE TIMES | Shall Wipers On    | Shall Wipers On in clock wise direction  |
| 04 | Wipers Off | USER BUTTON PRESS FOUR TIMES | Shall Wipers Off | Shall Wipers Off in anti clock wise direction   |
| 05 | ENCRYPTION | 1 OR 2 0R 3 0R 4 | encrypted data for 1/2/3/4 | encrypted data for 1/2/3/4 |


## LOW LEVEL TEST PLAN

| Test ID (for LOCK)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Engine On | USER BUTTON PRESS ONCE  | Shall ON all LED as per ENCRYPTION | Shall ON all LED as per ENCRYPTION | ✅ |
| 02 | Check for Engine Off | USER BUTTON PRESS TWICE  | Shall OFF all LED as per ENCRYPTION | Shall OFF all LED as per ENCRYPTION | ✅ |
| 03 | Check for Wipers On | USER BUTTON PRESS THREE TIMES | Shall ON LED's ONCE clockwise as per ENCRYPTION |  Shall ON LED's ONCE clockwise as per ENCRYPTION | ✅ |
| 04 | Check for Wipers Off | USER BUTTON PRESS FOUR TIMES | Shall ON LED's once anti-clockwise as per ENCRYPTION |  Shall ON LED's once anti-clockwise as per ENCRYPTION | ✅ |
| 05 | Check for ENCRYPTION | 1/2/3/4  | 1244/1843/6789/5478 | 1244/1843/6789/5478 | ✅ |
| 06 | Check for btn_press() | counts no of button press  | 1/2/3/4 | 1/2/3/4 | ✅ |
