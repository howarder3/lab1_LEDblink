# lab1_LEDblink


## Bug reason & solution:
The getsync() error is because before you can upload a sketch to the arduino you must first remove the xbee module from the shield. The XBee uses the Tx/Rx communication pins. These are the same pins the USB uses to talk to your PC. You must remove the XBee so that the pins are not used in order to let the Arduino use the USB connection.

![alt text](http://i.imgur.com/h9NjBzv.jpg)

![alt text](http://i.imgur.com/EBUAtE6.jpg)
