
// Wifi Settings
#define SSID                          "your SSID"
#define PASSWORD                      "password"

// MQTT Settings
#define HOSTNAME                      "beer_1"
#define MQTT_SERVER                   "mqtt server"
#define STATE_TOPIC                   "beer_1"
#define STATE_RAW_TOPIC               "beer_1/raw"
#define AVAILABILITY_TOPIC            "beer_1/available"
#define TARE_TOPIC                    "beer_1/tare"
#define mqtt_username                 "username"
#define mqtt_password                 "password"

// HX711 Pins
const int LOADCELL_DOUT_PIN = 2; // Remember these are ESP GPIO pins, they are not the physical pins on the board.
const int LOADCELL_SCK_PIN = 0;
int calibration_factor = -22500

; // Defines calibration factor we'll use for calibrating.
