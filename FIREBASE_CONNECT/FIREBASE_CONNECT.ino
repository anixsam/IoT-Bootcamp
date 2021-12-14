#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

//--------------FIREBASE CREDS------------------------------------//
#define FIREBASE_HOST "YOUR_FIREBASE_HOST"
#define FIREBASE_AUTH "YOUR_FIREBASE_AUTH"
//----------------------------------------------------------------//
//---------------WiFi Creds---------------------------------------//
#define WIFI_SSID "WIFI_SSID"
#define WIFI_PASSWORD "WIFI_PASS"
//----------------------------------------------------------------//


int i=0;

void setup() {
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}


void loop() {

  Firebase.setString("hello","Hello World");

  if(i!=100)
    Firebase.setFloat("number",i);
  delay(200);
  i++;
}
