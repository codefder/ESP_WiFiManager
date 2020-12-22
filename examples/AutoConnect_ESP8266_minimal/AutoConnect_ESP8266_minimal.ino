/****************************************************************************************************************************
  Async_AutoConnect_ESP8266_minimal.ino
  For ESP8266 / ESP32 boards
  Built by Khoi Hoang https://github.com/khoih-prog/ESP_WiFiManager
  Licensed under MIT license
 *****************************************************************************************************************************/
#if !( defined(ESP8266) )
  #error This code is intended to run on ESP8266 platform! Please check your Tools->Board setting.
#endif
#include <ESP_WiFiManager.h>              //https://github.com/khoih-prog/ESP_WiFiManager

void setup()
{
  Serial.begin(115200); while (!Serial); delay(200);
  Serial.print("\nStarting AutoConnect_ESP8266_minimal on " + String(ARDUINO_BOARD)); Serial.println(ESP_WIFIMANAGER_VERSION);
  ESP_WiFiManager ESP_wifiManager("AutoConnectAP");
  ESP_wifiManager.autoConnect("AutoConnectAP");
  if (WiFi.status() == WL_CONNECTED) { Serial.print("Connected. Local IP: "); Serial.println(WiFi.localIP()); }
  else { Serial.println(ESP_wifiManager.getStatus(WiFi.status())); }
}
void loop() {  }
