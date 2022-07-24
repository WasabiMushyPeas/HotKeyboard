import os
from time import sleep

isPluggedIn = False
lsusb = ""
while True:
    lsusb = os.system("lsusb | grep \"Arduino SA Nano 33 BLE\"")
    if "Arduino" in str(lsusb):
        if(isPluggedIn == False):
            os.system("python3 ~/Documents/Scripts/Python/hotKeyboard/keyBoardInterpriter.py")
            isPluggedIn = True
    else:
        if(isPluggedIn == True):
            os.system("pkill -f keyBoardInterpriter.py")
            isPluggedIn = False
    sleep(3)
