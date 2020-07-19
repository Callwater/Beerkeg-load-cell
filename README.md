# mqtt-beerkeg-load-cell-sensor

MQTT beerkeg sensor for integrating with Home Assistant, OpenHAB, Domoticz and anything else supporting MQTT.

Has remote tare function which you can issue over MQTT if your sensor suffers from drift which many load cells seem to. This saves having to re-start the device everytime you want to tare.


## Requirements

### Hardware

[Load cells with HX711 Amplifier](https://www.banggood.com/4pcs-DIY-50KG-Body-Load-Cell-Weight-Strain-Sensor-Resistance-With-HX711-AD-Module-p-1326815.html?rmmds=search&fbclid=IwAR0NmvoTRrVdggE9vbv3td4MPzyptq_HQC98ZDPmM2XYNvOOXPurNETny-k&cur_warehouse=CN)

[Esp826](https://www.banggood.com/Geekcreit-NodeMcu-Lua-WIFI-Internet-Things-Development-Board-Based-ESP8266-CP2102-Wireless-Module-p-1097112.html?rmmds=search&fbclid=IwAR0NmvoTRrVdggE9vbv3td4MPzyptq_HQC98ZDPmM2XYNvOOXPurNETny-k&cur_warehouse=CN)

[3d printed brackets](https://www.thingiverse.com/thing:2624188)

Phone charger and a micro usb cable

Some plywood 

### Libraries

[HX711](https://github.com/bogde/HX711)library - available through Arduino IDE library manager
[PubSubClient](https://github.com/knolleary/pubsubclient)library - available through Arduino IDE library manager
[ESP boards](https://github.com/esp8266/Arduino)

## Hardware setup

These load cells are essentially a series of resistors whose value changes when flexed, the resulting change in voltage can then be measured and transformed into scale readings.

We are going to be connecting the load cells in a full wheatstone bridge in this guide which uses 4 load cells, however it is possible to use 2. The wiring for this can be a little confusing on first glance.

Firstly identify the following connections on your HX711 board, E+, E-, A+, A- (sometimes A is called S so interchange these).

The easiest way to start out is to lay all 4 load cells out into a square shape with one in each corner. You will have an Upper Left, Upper Right, Lower Left and Lower Right. In a very basic sense, the white wires join horizontally, the black wires join vertically and the red wires go to the HX711.

Upper left should go to E+, lower right should go to E-, upper right should go to A+, lower left should go to A-.

Once you have that, we need to wire the HX711 to the our Wemos D1 Mini (or whichever board you are using). Wire the 5v output of your board to the VCC pin on the HX711, do the same with the ground pins. Then we take the pin labelled D4 on our board and wire it to the DAT pin of the HX711. Finally, RX pin of our board goes to CLK of the HX711. We are using pins 2 and 3 in our code which corresponds to D4 and RX on our ESP board (GPIO 2 & 3).

It should look like this:

![Image of wire](https://everythingsmarthome.co.uk/wp-content/uploads/2019/09/load-cell-wiring.png)





