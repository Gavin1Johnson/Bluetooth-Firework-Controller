//    ____ __    __     ___   ___   __  __ ______ ____    ___   __    __     ____ ____ 
//   ||    ||    ||    //    // \\  ||\ || | || | || \\  // \\  ||    ||    ||    || \\
//   ||==  \\ /\ //   ((    ((   )) ||\\||   ||   ||_// ((   )) ||    ||    ||==  ||_//
//   ||     \V/\V/     \\__  \\_//  || \||   ||   || \\  \\_//  ||__| ||__| ||___ || \\
//                                                       
// This code uses a Bluetooth connection to allow the " FWController-APP " to light up to six fireworks from the FWController circuit.
// After the FWController circuit is built, this code must be uploaded to the ESP-32.
// To use a ESP-32 with Arduino IDE, you must click on " File ", then " Preferences ". Go to " Sketchbook Loacation: " and past " https://dl.espressif.com/dl/package_esp32_index.json " and click " OK ".
// Now go to " Tools ", then " Board: ", then " ESP32 Arduino " and select the board you are using. I am using the " HiLetgo ESP-WROOM-32 ", but any esp-32 with Bluetooth should work to my knowledge.
// Then you must download the " FWController-APP ".
// Here is a link to download the app, https://gallery.appinventor.mit.edu/?galleryid=07105df6-4db3-4b73-83b0-122944c37ee6.
// To download, follow the link and click on "Load App into MIT App Inventor".
// From there, click " Build ", then " Android App (.apk) ", Then scan the QR code with your phone’s camera.
// When the app is installed, you must pair your phone's Bluetooth with the Arduino in your phones Bluetooth settings, look for " FWcontroller ".
// Then open the app and click the green connect button, select " FWController ".
// Now you should be able to control the circuits outputs by holding down on the ignitor you select in the app.
// When you let off of an Ignition button in the app, the output will be tuned off. You must hold the button for as long as you want the output to be on.

#include <BluetoothSerial.h>  // Includes Bluetooth library.

BluetoothSerial SerialBT;  // Initializes Bluetooth serial connection.
byte switchstate;  // Sets variable "Switchstate" as a Byte.

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

const int Output1 = 21;  // Define Output1 as constant on pin 21.
const int Output2 = 27;  // Define Output2 as constant on pin 27.
const int Output3 = 25;  // Define Output3 as constant on pin 25.
const int Output4 = 32;  // Define Output4 as constant on pin 32.
const int Output5 = 17;  // Define Output5 as constant on pin 17.
const int Output6 = 16;  // Define Output6 as constant on pin 16.


void setup() {
  pinMode(Output1, OUTPUT);  // Defines Output1 as an OUTPUT.
  pinMode(Output2, OUTPUT);  // Defines Output2 as an OUTPUT.
  pinMode(Output3, OUTPUT);  // Defines Output3 as an OUTPUT.
  pinMode(Output4, OUTPUT);  // Defines Output4 as an OUTPUT.
  pinMode(Output5, OUTPUT);  // Defines Output5 as an OUTPUT.
  pinMode(Output6, OUTPUT);  // Defines Output6 as an OUTPUT.

  Serial.begin(115200);  // Starts Serial monitor at 115200 baud rate.
  SerialBT.begin("FWcontroller"); //Bluetooth device name.
  Serial.println("The device started, now you can pair it with bluetooth!"); // State that the device is ready to pair in the serial monitor.
}

void loop() 
{
  if (SerialBT.available()) // If Bluetooth Serial connection available...
  {
    switchstate = SerialBT.read(); // Set the variable "Switchsate" equal to SerialBT.read.
    delay (500); // set a 500-millisecond delay.
    }
  
  // Logic for Ignitor 1
  if (switchstate == '1') // If there is an input of '1'...
  {
    digitalWrite(Output1, HIGH); // Pull Output1 HIGH on the Arduino.
    Serial.print("Ignitor 1 On"); // Write "Ignitor 1 ON" to the serial monitor
    }
    else if (switchstate == '0') // If there is an input of '0'...
    {
      digitalWrite(Output1, LOW); // Pull Output1 LOW on the Arduino.
      }
  
  // Logic for Ignitor 2
  if (switchstate == '2') // If there is an input of '2'...
  {
    digitalWrite(Output2, HIGH); // Pull Output2 HIGH on the Arduino.
    Serial.print("Ignitor 2 On"); // Write "Ignitor 2 ON" to the serial monitor
    }
    else if (switchstate == '0') // If there is an input of '0'...
    {
      digitalWrite(Output2, LOW); // Pull Output2 LOW on the Arduino.
      }
  //
  // Logic for Ignitor3
  if (switchstate == '3') // If there is an input of '3'...
  {
    digitalWrite(Output3, HIGH); // Pull Output3 HIGH on the Arduino.
    Serial.print("Ignitor 3 On"); // Write "Ignitor 3 ON" to the serial monitor
    }
    else if (switchstate == '0') // If there is an input of '0'...
    {
      digitalWrite(Output3, LOW); // Pull Output3 LOW on the Arduino.
      }
  //
  // Logic for Ignitor 4
  if (switchstate == '4') // If there is an input of '4'...
  {
    digitalWrite(Output4, HIGH); // Pull Output4 HIGH on the Arduino.
    Serial.print("Ignitor 4 On"); // Write "Ignitor 4 ON" to the serial monitor
    }
    else if (switchstate == '0') // If there is an input of '0'...
    {
      digitalWrite(Output4, LOW); // Pull Output4 LOW on the Arduino.
      }
  //
  // Logic for Ignitor5
  if (switchstate == '5') // If there is an input of '5'...
  {
    digitalWrite(Output5, HIGH); // Pull Output5 HIGH on the Arduino.
    Serial.print("Ignitor 5 On"); // Write "Ignitor 5 ON" to the serial monitor
    }
    else if (switchstate == '0') // If there is an input of '0'...
    {
      digitalWrite(Output5, LOW); // Pull Output5 LOW on the Arduino.
      }
  //
  // Logic for Ignitor6
  if (switchstate == '6') // If there is an input of '6'...
  {
    digitalWrite(Output6, HIGH); // Pull Output6 HIGH on the Arduino.
    Serial.print("Ignitor 6 On"); // Write "Ignitor 6 ON" to the serial monitor
    }
    else if (switchstate == '0') // If there is an input of '0'...
    {
      digitalWrite(Output6, LOW); // Pull Output6 LOW on the Arduino.
      }
  //
  //
  delay(20); // Sets a 20 Millisecond delay before repeating the loop.
}
