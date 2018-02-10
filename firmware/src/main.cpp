#include <Arduino.h>
/*
   NodeManager is intended to take care on your behalf of all those common tasks a MySensors node has to accomplish, speeding up the development cycle of your projects.
   NodeManager includes the following main components:
   - Sleep manager: allows managing automatically the complexity behind battery-powered sensors spending most of their time sleeping
   - Power manager: allows powering on your sensors only while the node is awake
   - Battery manager: provides common functionalities to read and report the battery level
   - Remote configuration: allows configuring remotely the node without the need to have physical access to it
   - Built-in personalities: for the most common sensors, provide embedded code so to allow their configuration with a single line
   Documentation available on: https://github.com/mysensors/NodeManager
 */


// load user settings
#include "config.h"
// include supporting libraries
#ifdef MY_GATEWAY_ESP8266
  #include <ESP8266WiFi.h>
#endif
// load MySensors library\
//
#include <MySensors.h>
// load NodeManager library
#include "NodeManager.h"

// create a NodeManager instance
NodeManager nodeManager;

// before
void before() {
  // setup the serial port baud rate
  Serial.begin(MY_BAUD_RATE);

  /*
   * Register below your sensors
   */
  nodeManager.setBatteryMin(1.9);
  nodeManager.setBatteryMax(3.3);
  nodeManager.setSleepMinutes(60);
  nodeManager.setBatteryReportHours(6);
  nodeManager.setBatteryInternalVcc(true);
  nodeManager.setSleepInterruptPin(true);
  nodeManager.setPowerPins(-1, 4, 1000);
  nodeManager.setAutoPowerPins(false);

  int int_door = nodeManager.registerSensor(SENSOR_DOOR, 2, 1);
  int ext_door = nodeManager.registerSensor(SENSOR_DOOR, 3, 2);
  int int_temp = nodeManager.registerSensor(SENSOR_DS18B20, 5, 5);

  SensorDoor* door_sensor_int = ((SensorDoor*) nodeManager.getSensor(int_door));
  char int_door_name [] = "Internal Door Sensor";
  door_sensor_int->setDescription(int_door_name);
  door_sensor_int->setInterrupt(2, CHANGE, -1);

  SensorDoor* door_sensor_ext = (SensorDoor*) nodeManager.getSensor(ext_door);
  char ext_door_name [] = "External Door Sensor";
  door_sensor_ext->setDescription(ext_door_name);
  door_sensor_ext->setInterrupt(3, CHANGE, -1);

  wait(1000);
  SensorDs18b20* temp_sensor_int = (SensorDs18b20*) nodeManager.getSensor(int_temp);
  char int_temp_name [] = "Internal Temperature Sensor";
  temp_sensor_int->setDescription(int_temp_name);
  temp_sensor_int->setReportIntervalMinutes(60);
  // temp_sensor_int->setPowerPins(-1, 4, 50);
  /*
   * Register above your sensors
   */
  nodeManager.before();
}

// presentation
void presentation() {
  // call NodeManager presentation routine
  nodeManager.presentation();
}

// setup
void setup() {
  // call NodeManager setup routine
  nodeManager.setup();
}

// loop
void loop() {
  // call NodeManager loop routine
  nodeManager.loop();
}

// receive
void receive(const MyMessage &message) {
  // call NodeManager receive routine
  nodeManager.receive(message);
}

// receiveTime
void receiveTime(unsigned long ts) {
// call NodeManager receiveTime routine
  nodeManager.receiveTime(ts);
}
