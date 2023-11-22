#ifndef WEBSERVER_H
#define WEBSERVER_H

// Load Wi-Fi library
#include <WiFi.h>
#include "../../../USER_SETTINGS.h"  // Needed for WiFi ssid and password
#include "../../lib/me-no-dev-AsyncTCP/src/AsyncTCP.h"
#include "../../lib/me-no-dev-ESPAsyncWebServer/src/ESPAsyncWebServer.h"
#include "../config.h"  // Needed for LED defines

extern uint8_t LEDcolor;  // Enum, 0-10
extern const char* ssid;
extern const char* password;
extern const char* ssidAP;
extern const char* passwordAP;

/**
 * @brief Initialization function for the webserver.
 *
 * @param[in] void
 *
 * @return void
 */
void init_webserver();

/**
 * @brief Initialization function that creates a WiFi Access Point.
 *
 * @param[in] void
 * 
 * @return void
 */
void init_WiFi_AP();

/**
 * @brief Initialization function that connects to an existing network.
 *
 * @param[in] ssid WiFi network name
 * @param[in] password WiFi network password
 * 
 * @return void
 */
void init_WiFi_STA(const char* ssid, const char* password);

/**
 * @brief Replaces placeholder with content section in web page
 * 
 * @param[in] var
 *
 * @return String
 */
String processor(const String& var);

#endif