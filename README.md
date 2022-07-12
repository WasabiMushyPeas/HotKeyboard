# HotKeyboard
This is a simple Arduino project that allows none HID Arduino boards to simulate key presses through a serial monitor on python which than simulates the key presses
# Installation
- Dowload this git repo
- upload the [hotKeyBoard.ino](https://github.com/WasabiMushyPeas/HotKeyboard/blob/main/hotKeyBoard.ino) to your Arduino through the [Arduino IDE](https://www.arduino.cc/en/software)
- Pip install these pyhton libaries
'''
pip install pynput
'''
'''
pip install pyserial
'''
- make sure ser = serial.Serial('/dev/ttyACM0') in [keyBoardInterpriter.py](https://github.com/WasabiMushyPeas/HotKeyboard/blob/main/keyBoardInterpriter.py) on line 12 you replace '/dev/ttyACM0' with the port that your Arduino is connected to
- then run the python program
# Customization
if you want to customize your keyboard shortcuts edit the [keyBoardShortcuts.txt](https://github.com/WasabiMushyPeas/HotKeyboard/blob/main/keyBoardShortcuts.txt) and put your keyboard shortcuts in the text file like so:
'''
cmd|g #cmd is short for the windows key or the command key on mac
Ctrl|h #this the command Ctrl+h | seperates the key presses

