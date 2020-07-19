# mqtt-beerkeg-load-cell-sensor

MQTT beerkeg sensor for integrating with Home Assistant, OpenHAB, Domoticz and anything else supporting MQTT.

Has remote tare function which you can issue over MQTT if your sensor suffers from drift which many load cells seem to. This saves having to re-start the device everytime you want to tare.


# Requirements

## Hardware

[Load cells with HX711 Amplifier](https://www.banggood.com/4pcs-DIY-50KG-Body-Load-Cell-Weight-Strain-Sensor-Resistance-With-HX711-AD-Module-p-1326815.html?rmmds=search&fbclid=IwAR0NmvoTRrVdggE9vbv3td4MPzyptq_HQC98ZDPmM2XYNvOOXPurNETny-k&cur_warehouse=CN)

[Esp826](https://www.banggood.com/Geekcreit-NodeMcu-Lua-WIFI-Internet-Things-Development-Board-Based-ESP8266-CP2102-Wireless-Module-p-1097112.html?rmmds=search&fbclid=IwAR0NmvoTRrVdggE9vbv3td4MPzyptq_HQC98ZDPmM2XYNvOOXPurNETny-k&cur_warehouse=CN)

[3d printed brackets](https://www.thingiverse.com/thing:2624188)

Phone charger and a micro usb cable

Some plywood 

## Libraries

[HX711] library - available through Arduino IDE library manager(https://github.com/bogde/HX711)




