import serial
from pynput.keyboard import Key, Controller, KeyCode
import time
import os

Keyboard = Controller()

keyBoardSCfile = open("keyBoardShortcuts.txt", "r")
keyBoardShortcuts = keyBoardSCfile.readlines()
keyBoardSCfile.close()

ser = serial.Serial('/dev/ttyACM0')

if(ser.isOpen()):
    ser = serial.Serial('/dev/ttyACM1')
    print("Using: ACM1")
else:
    print("Using: ACM0")

while True:
    keyNum = ser.readline()
    keyNum = str(keyNum)
    keyNum = keyNum.replace("b", "").replace("\'", "").replace("\\n", "")

    print(keyNum)
    if(int(keyNum) >= 10):
        indivualKeys = keyBoardShortcuts[(int(keyNum)) - 1].split("|")

        x = 0
        for key in indivualKeys:
            indivualKeys[x] = key.replace('\n', '')
            x += 1
        
        for key in indivualKeys:
            if(key == "cmd"):
                print("press: " + key)
                Keyboard.press(Key.cmd)
            elif(key == "Ctrl"):
                Keyboard.press(Key.ctrl)
            elif(key == "Shift"):
                Keyboard.press(Key.shift)
            elif(key == "alt"):
                Keyboard.press(Key.alt)
            elif(key == "Enter"):
                Keyboard.press(Key.enter)
            elif(key == "Tab"):
                Keyboard.press(Key.tab)
            elif(key == "Esc"):
                Keyboard.press(Key.esc)
            elif(key == "Delete"):
                Keyboard.press(Key.delete)
            elif(key == "Backspace"):
                Keyboard.press(Key.backspace)
            else:
                print("press: " + key)
                Keyboard.press(KeyCode.from_char(key))

        time.sleep(0.1)
        for key in indivualKeys:
            if(key == "cmd"):
                print("release: " + key)
                Keyboard.release(Key.cmd)
            elif(key == "Ctrl"):
                Keyboard.release(Key.ctrl)
            elif(key == "Shift"):
                Keyboard.release(Key.shift)
            elif(key == "alt"):
                Keyboard.release(Key.alt)
            elif(key == "Enter"):
                Keyboard.release(Key.enter)
            elif(key == "Tab"):
                Keyboard.release(Key.tab)
            elif(key == "Esc"):
                Keyboard.release(Key.esc)
            elif(key == "Delete"):
                Keyboard.release(Key.delete)
            elif(key == "Backspace"):
                Keyboard.release(Key.backspace)
            else:
                print("release: " + key)
                Keyboard.release(KeyCode.from_char(key))
    else:
        if(int(keyNum) == 1):
            os.system("kitty &")
        if(int(keyNum) == 2):
            os.system("xdotool getwindowfocus windowkill")
        if(int(keyNum) == 3):
            os.system("firefox")
