# Bluetooth-Firework-Controller
This project is a Bluetooth controlled Firework circuit printed on a custom PCB, utilizing a esp32 and MIT app inventor. 

This code uses a Bluetooth connection to allow the " FWController-APP " to light up to six fireworks from the FWController circuit.
After the FWController circuit is built, this code must be uploaded to the ESP-32.
To use a ESP-32 with Arduino IDE, you must click on " File ", then " Preferences ". Go to " Sketchbook Loacation: " and past " https://dl.espressif.com/dl/package_esp32_index.json " and click " OK ".
Now go to " Tools ", then " Board: ", then " ESP32 Arduino " and select the board you are using. I am using the " TTGO T7 V1.3 mini ", but any esp-32 with Bluetooth should work to my knowledge.
Then you must download the " FWController-APP ".
Here is a link to download the app, https://gallery.appinventor.mit.edu/?galleryid=07105df6-4db3-4b73-83b0-122944c37ee6.
To download, follow the link and click on "Load App into MIT App Inventor".
From there, click " Build ", then " Android App (.apk) ", Then scan the QR code with your phone’s camera.
When the app is installed, you must pair your phone's Bluetooth with the Arduino in your phones Bluetooth settings, look for " FWcontroller ".
Then open the app and click the green connect button, select " FWController ".
Now you should be able to control the circuits outputs by holding down on the ignitor you select in the app.
When you let off of an Ignition button in the app, the output will be tuned off. You must hold the button for as long as you want the output to be on.
