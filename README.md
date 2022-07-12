# HotKey board
This is a simple Arduino project that allows none HID Arduino boards to simulate key presses through a serial monitor on python which than simulates the key presses
# Installation
- Download this git repo
- upload the [hotKeyBoard.ino](https://github.com/WasabiMushyPeas/HotKeyboard/blob/main/hotKeyBoard.ino) to your Arduino through the [Arduino IDE](https://www.arduino.cc/en/software)
- Pip install these Python libraries
`
pip install input
`
`
pip install serial
`
- make sure ser = serial. Serial('/dev/ttyACM0') in [keyBoardInterpriter.py](https://github.com/WasabiMushyPeas/HotKeyboard/blob/main/keyBoardInterpriter.py) on line 12 you replace '/dev/ttyACM0' with the port that your Arduino is connected to
- then run the python program
# Customization
if you want to customize your keyboard shortcuts edit the [keyBoardShortcuts.txt](https://github.com/WasabiMushyPeas/HotKeyboard/blob/main/keyBoardShortcuts.txt) and put your keyboard shortcuts in the text file like so:
```
cmd|g #cmd is short for the windows key or the command key on mac
Ctrl|h #this the command Ctrl+h | separates the key presses
Ctrl|Alt|Delete #This will be bound to the 3rd key and Ctrl|h the 2nd key and cmd|g the 1st key you can put up to 27. 
#The first key is the top left going from left to right then up to down.
```
> :warning: **Make sure you delete all the comments the [keyBoardShortcuts.txt](https://github.com/WasabiMushyPeas/HotKeyboard/blob/main/keyBoardShortcuts.txt) can not have comments**
# Other
if you need to excute commands on linux check out [the awesomewm fork](https://github.com/WasabiMushyPeas/HotKeyboard/tree/awesomewm)
