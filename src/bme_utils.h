#ifndef BME_UTILS_H_
#define BME_UTILS_H_

#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <Adafruit_BMP280.h>
#include <Adafruit_BME680.h>
#include <Arduino.h>

 
namespace BME_Utils {

    void getWxModuleAddres();
    void setup();
    String generateTempString(float bmeTemp, String type);
    String generateHumString(float bmeHum, String type);
    String generatePresString(float bmePress, String type);
    String readDataSensor(String type);

}

#endif