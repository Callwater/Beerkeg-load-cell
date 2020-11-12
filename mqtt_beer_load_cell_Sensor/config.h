
// Wifi Settings
#define SSID                          "SSID"
#define PASSWORD                      "password"

// MQTT Settings
#define HOSTNAME                      "beer_1"
#define MQTT_SERVER                   "server_ip"
#define STATE_TOPIC                   "beer_1"
#define STATE_RAW_TOPIC               "beer_1/raw"
#define AVAILABILITY_TOPIC            "beer_1/available"
#define TARE_TOPIC                    "beer_1/tare"
#define TEMPERATURE_TOPIC             "beer_1/temperature"
#define HUMIDITY_TOPIC                "beer_1/humidity"
#define mqtt_username                 "mqtt"
#define mqtt_password                 "password"

// HX711 Pins
const int LOADCELL_DOUT_PIN = 2;  // Remember these are ESP GPIO pins, they are not the physical pins on the board.
const int LOADCELL_SCK_PIN = 0;
int calibration_factor = -22500;  // Defines calibration factor we'll use for calibrating.
int offset_factor = -137202;       // Defines offset factor if you have static weight on the loadcell. For exaple the wight of a empty Cornelius keg. 

// DHT Settings
constexpr auto DHT_PIN = 4;            // Remember these are ESP GPIO pins, they are not the physical pins on the board. 
#define DHT_TYPE DHT22                 // DHT11 or DHT22
constexpr auto sendDHTDataDelay = 500ul; // Delay between sending data over MQTT
