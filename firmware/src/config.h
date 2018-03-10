#ifndef config_h
#define config_h

/**********************************
 * Sketch configuration
 */

#define SKETCH_NAME "NodeManager"
#define SKETCH_VERSION "1.0"

/**********************************
 * MySensors node configuration
 */

// General settings
#define MY_BAUD_RATE 9600
#define MY_DEBUG
// #define MY_NODE_ID 100
//#define MY_SMART_SLEEP_WAIT_DURATION_MS 500
#define MY_SPLASH_SCREEN_DISABLED
// #define MY_SIGNAL_REPORT_ENABLED
// NRF24 radio settings
#define MY_RADIO_NRF24
#define MY_RF24_CS_PIN 8
#define MY_RF24_CE_PIN 7
//#define MY_RF24_ENABLE_ENCRYPTION
//#define MY_RF24_CHANNEL 76
//#define MY_RF24_PA_LEVEL RF24_PA_HIGH
// #define MY_DEBUG_VERBOSE_RF24
//#define MY_RF24_DATARATE RF24_250KBPS

// Message signing settings
//#define MY_SIGNING_SOFT
//#define MY_SIGNING_SOFT_RANDOMSEED_PIN 7
//#define MY_SIGNING_REQUEST_SIGNATURES
//#define MY_SIGNING_ATSHA204

// OTA Firmware update settings
//#define MY_OTA_FIRMWARE_FEATURE
//#define OTA_WAIT_PERIOD 300
//#define FIRMWARE_MAX_REQUESTS 2
//#define MY_OTA_RETRY 2

/***********************************
 * NodeManager configuration
 */

// if enabled, enable debug messages on serial port
#define DEBUG 1

// if enabled, enable the capability to power on sensors with the arduino's pins to save battery while sleeping
#define POWER_MANAGER 1
// if enabled, will load the battery manager library to allow the battery level to be reported automatically or on demand
#define BATTERY_MANAGER 1
// if enabled, allow modifying the configuration remotely by interacting with the configuration child id
#define REMOTE_CONFIGURATION 0
// if enabled, persist the remote configuration settings on EEPROM
#define PERSIST 1
// if enabled, a battery sensor will be created at BATTERY_CHILD_ID (201 by default) and will report vcc voltage together with the battery level percentage
#define BATTERY_SENSOR 1
// if enabled, a signal sensor will be created at RSSI_CHILD_ID (202 by default) and will report the signal quality of the transport layer
#define SIGNAL_SENSOR 0
// if enabled, send a SLEEPING and AWAKE service messages just before entering and just after leaving a sleep cycle and STARTED when starting/rebooting
#define SERVICE_MESSAGES 0

// Enable this module to use one of the following sensors: SENSOR_ANALOG_INPUT, SENSOR_LDR, SENSOR_THERMISTOR, SENSOR_ML8511, SENSOR_ACS712, SENSOR_RAIN, SENSOR_SOIL_MOISTURE
#define MODULE_ANALOG_INPUT 0
// Enable this module to use one of the following sensors: SENSOR_DIGITAL_INPUT
#define MODULE_DIGITAL_INPUT 1
// Enable this module to use one of the following sensors: SENSOR_DIGITAL_OUTPUT, SENSOR_RELAY, SENSOR_LATCHING_RELAY
#define MODULE_DIGITAL_OUTPUT 0
// Enable this module to use one of the following sensors: SENSOR_DHT11, SENSOR_DHT22
#define MODULE_DHT 0
// Enable this module to use one of the following sensors: SENSOR_SHT21, SENSOR_HTU21D
#define MODULE_SHT21 0
// Enable this module to use one of the following sensors: SENSOR_SWITCH, SENSOR_DOOR, SENSOR_MOTION
#define MODULE_SWITCH 1
// Enable this module to use one of the following sensors: SENSOR_DS18B20
#define MODULE_DS18B20 1
// Enable this module to use one of the following sensors: SENSOR_BH1750
#define MODULE_BH1750 0
// Enable this module to use one of the following sensors: SENSOR_MLX90614
#define MODULE_MLX90614 0
// Enable this module to use one of the following sensors: SENSOR_BME280
#define MODULE_BME280 0
// Enable this module to use one of the following sensors: SENSOR_SONOFF
#define MODULE_SONOFF 0
// Enable this module to use one of the following sensors: SENSOR_BMP085
#define MODULE_BMP085 0
// Enable this module to use one of the following sensors: SENSOR_HCSR04
#define MODULE_HCSR04 0
// Enable this module to use one of the following sensors: SENSOR_MCP9808
#define MODULE_MCP9808 0
// Enable this module to use one of the following sensors: SENSOR_MQ
#define MODULE_MQ 0
// Enable this module to use one of the following sensors: SENSOR_MHZ19
#define MODULE_MHZ19 0
// Enable this module to use one of the following sensors: SENSOR_AM2320
#define MODULE_AM2320 0
// Enable this module to use one of the following sensors: SENSOR_TSL2561
#define MODULE_TSL2561 0
// Enable this module to use one of the following sensors: SENSOR_PT100
#define MODULE_PT100 0
// Enable this module to use one of the following sensors: SENSOR_BMP280
#define MODULE_BMP280 0
// Enable this module to use one of the following sensors: SENSOR_DIMMER
#define MODULE_DIMMER 0
// Enable this module to use one of the following sensors: SENSOR_RAIN_GAUGE, SENSOR_POWER_METER, SENSOR_WATER_METER
#define MODULE_PULSE_METER 0

#endif
