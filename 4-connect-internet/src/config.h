#pragma once

#include <string>

using namespace std;

// WiFi credentials
const char *SSID = "Pooja";
const char *PASSWORD = "not4everyone";

// MQTT settings
const string ID = "e25e19c3-8769-4ab3-b900-fdfd2552ab3f";

const string BROKER = "test.mosquitto.org";
const string CLIENT_NAME = ID + "nightlight_client";

const string CLIENT_TELEMETRY_TOPIC = ID + "/telemetry";

const string SERVER_COMMAND_TOPIC = ID + "/commands";

