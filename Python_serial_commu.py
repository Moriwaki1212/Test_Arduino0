import serial
import time
print("Open Port")
ser = serial.Serial("COM3",9600,timeout=1)
i=0
while True:
    ser.write(b"1")
    time.sleep(1)
    ser.write(b"0")
    time.sleep(1)


    print(i)
    i=i+1
    if i==5:
        break



print("Close Port")
ser.close()