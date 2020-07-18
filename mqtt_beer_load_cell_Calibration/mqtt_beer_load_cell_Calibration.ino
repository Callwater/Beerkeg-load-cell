#include <HX711.h>

HX711 scale;  // Initializes library functions.

const int LOADCELL_DOUT_PIN = 2;          //Remember these are ESP GPIO pins, these might not be the pins labeled on the board.
const int LOADCELL_SCK_PIN = 0;

int calibration_factor = -22500





; // Defines calibration factor we'll use for calibrating.

void setup()
{
  Serial.begin(74880);   // Starts serial communication in 9600 baud rate.

  Serial.println("Initializing scale calibration.");  // Prints user commands.
  Serial.println("Please remove all weight from scale.");
  Serial.println("Place known weights on scale one by one.");
  Serial.println("Press + or a to increase calibration factor");
  Serial.println("Press - or z to decrease calibration factor");

  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);   // Initializes the scaling process.
  scale.set_scale();
  scale.tare();          // Resets the scale to 0.
}


void loop()
{

  scale.set_scale(calibration_factor);  // Adjusts the calibration factor.
  scale.wait_ready();
  Serial.print("Reading: ");            // Prints weight readings in .2 decimal kg units.
  Serial.print(scale.get_units(), 2);
  Serial.println(" kg");
  Serial.print("Calibration factor: "); // Prints calibration factor.
  Serial.println(calibration_factor);

  scale.power_down();    // Puts the scale to sleep mode for 3 seconds.
  delay(3000);
  scale.power_up();

  if(Serial.available())
  {
    char temp = Serial.read();
    if(temp == '+' || temp == 'a')
      calibration_factor += 500;
    else if(temp == '-' || temp == 'z')
      calibration_factor -= 500;  
  }
}
