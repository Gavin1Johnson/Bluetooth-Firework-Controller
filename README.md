# Bluetooth-Firework-Controller
This project is a Bluetooth controlled Firework circuit, printed on a custom PCB, utilizing an esp32 and MIT app inventor. 

  
  
****** Making the Circuit ******

  First we need to make the physical circuit. I have the Gerber file for the PCB that was created in Fushion 360 Eagle. Upload this file to https://cart.jlcpcb.com/quote. Leave all of the default settings as is unless you want a different color, Green and Black are the cheapest. We now need to gather all of the bits and peaces to put on the PCB, here is a list of everything you will need...

* 8 RGB LED's // you will need to cut the two unused leads to get the color you want.

* 12V to 5V regulator // I used this adjustable one, https://www.amazon.com/MP1584EN-DC-DC-Converter-Adjustable-Module/dp/B01MQGMOKI/ref=sr_1_10?crid=20SXA6HKESWZD&dchild=1&keywords=12v+to+5v+step+down+converter&qid=1630436302&sprefix=12v+to+5v%2Caps%2C218&sr=8-10

* ESP32 // I used the HiLetgo ESP-WROOM-32, whatever esp32 you use must have built in Bluetooth. // https://www.amazon.com/dp/B0718T232Z?psc=1&ref=ppx_yo2_dt_b_product_details

* To protect the circuit from reverse polarity, we need a Schottky Diode // I used this one, https://www.amazon.com/20-Pieces-15SQ045-Schottky-Rectifier/dp/B079KK5KXN/ref=sr_1_7?dchild=1&keywords=AKOAK+15amp+Diode+Axial+Schottky+Blocking+Diodes+for+Solar+Cells+Panel%2C15SQ045+Schottky%2820Pcs%29&qid=1630436636&s=industrial&sr=1-7

* Each of our 8 LED's will need a resistor // I used 470 Ohms 1/2W resistors

* 6 Screw terminal blocks with two terminals each // I used these, https://www.amazon.com/DGZZI-50pcs-Terminal-Connector-Arduino/dp/B07SZFGH4B/ref=sr_1_5?crid=5CSNFZ1R5NCE&dchild=1&keywords=pcb+screw+terminal+block&qid=1630437130&s=industrial&sprefix=pcb+scre%2Cindustrial%2C169&sr=1-5

* Voltage Display // I used this one, https://www.amazon.com/dp/B07Q2RQYPJ?psc=1&ref=ppx_yo2_dt_b_product_details

* To switch the outputs on/off you will need to use the IRLB8721 Mosfet // https://www.amazon.com/dp/B083WMH7CD?psc=1&ref=ppx_yo2_dt_b_product_details

* For safity, you will need to use a switch to arm and disarm the outputs // https://www.amazon.com/Taiss-Latching-Position-Incidental-Connect/dp/B08F1D52YS/ref=sr_1_5?crid=1VFR086O04FB&dchild=1&keywords=12v+toggle+switch&qid=1630437351&s=industrial&sprefix=12v+t%2Cindustrial%2C173&sr=1-5

* To power the system, I used a 3s LIPO battery // https://www.amazon.com/TATTU-850mAh-Battery-Racing-Quadcopters/dp/B07218SB7L/ref=sr_1_31?dchild=1&keywords=3s+lipo&qid=1630437418&sr=8-31

* To Protect the LIPO from over charge/Over discharge we need a BMS // https://www.amazon.com/Comidox-Protection-Anti-Overcharge-Over-Discharge-Over-Current/dp/B07J9NXQ6W/ref=sr_1_12?dchild=1&keywords=3s+lipo+bms&qid=1630437488&sr=8-12

* If you want to charge the LIPO with a USB cable we will need to step up the 5v from the cable to 12V for the LIPO // https://www.amazon.com/dp/B07RNBJK5F?psc=1&ref=ppx_yo2_dt_b_product_details

* A USB-C connector will be connected to the 5V-12V boost converter so the system can be charged with a phone cable // https://www.amazon.com/Electronics123-SparkFun-USB-C-Breakout/dp/B07M6R37L8/ref=sr_1_6?dchild=1&keywords=usb+c+board&qid=1630437616&sr=8-6

* Lastly, you will need multistranded 22 AWG wire to extend the PWR LED / ARM LED / ARM Switch. We will also be using the inner strands to wrap around the firework fuses to ignite them. 




****** 3D printing the Enclosure ******

  After the circuit is built, it should be installed in an enclosure. I included the STL files for a 3D printable enclosure I designed for this project. "The enclosure has space under the circuit board that will fit the 3s LIPO". 




****** Installing the Arduino Code and Phone App ******

  After the circuit is built, The included Arduino code must be copied and pasted into the Arduino IDE, https://www.arduino.cc/en/software.
To use a ESP-32 with Arduino IDE, you must click on " File ", then " Preferences ". Go to " Sketchbook Location: " here you will Copy and Past this link, " https://dl.espressif.com/dl/package_esp32_index.json " and click " OK ".
Now go to " Tools ", then " Board: ", then " ESP32 Arduino " and select the board you are using. I am using the " HiLetgo ESP-WROMM-32 ", but any esp-32 with Bluetooth should work to my knowledge.
Then you must download the " FWController-APP ".
Here is a link to download the app, https://gallery.appinventor.mit.edu/?galleryid=07105df6-4db3-4b73-83b0-122944c37ee6.
To download, follow the link and click on "Load App into MIT App Inventor".
From there, click " Build ", then " Android App (.apk) ", Then scan the QR code with your phone’s camera.
When the app is installed, you must pair your phone's Bluetooth with the Arduino in your phones Bluetooth settings, look for " FWcontroller ".
Then open the app and click the green connect button, select " FWController ".
Now you should be able to control the circuit outputs by holding down on the ignitor you select in the app.
When you let off of an Ignition button in the app, the output will be tuned off. You must hold the button for as long as you want the output to be on.




****** Using the System ******

  To Use the system, Strip the insulation off of a 22 AWG multistranded wire. Wrap one strand of wire around a firework fuse and connect each side of wire into the terminal blocks on the Fierwork Controller unit. Then pair the system to the phone app, turn on the arm switch and hold down on the ignitor switch you want to ignite. 
