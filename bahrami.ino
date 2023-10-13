#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>
#include "index.h"
ESP8266WebServer server(80);
IPAddress local_IP(192,168,1,102);
IPAddress subnet(255,255,255,0);
void setup() {
  delay(2000);
  Serial.begin(115200);
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  digitalWrite(D0,0);
  digitalWrite(D1,0);
  digitalWrite(D2,0);
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(local_IP,local_IP,subnet);
  WiFi.softAP("Babak44", "12345678");
  Serial.print("Wifi Ap IP = ");
  Serial.println(WiFi.softAPIP());
  server.on("/", handleRoot);
  server.on("/SET", action);
  server.begin();

}

void loop() {
  server.handleClient();
}
void handleRoot() {
  server.send(200,"text/html",index_page);
}
void action() {
  Serial.println("OK");
  String steps = server.arg("Set");
  if(steps == "off")
  {
    digitalWrite(D0,0);
    digitalWrite(D1,0);
    digitalWrite(D2,0);
    server.send(200,"text/plain","Fan is off");
  }
  if(steps == "I")
  {
    digitalWrite(D0,1);
    digitalWrite(D1,0);
    digitalWrite(D2,0);
    server.send(200,"text/plain","Low fan speed");
  }
  if(steps == "II")
  {
    digitalWrite(D0,0);
    digitalWrite(D1,1);
    digitalWrite(D2,0);
    server.send(200,"text/plain","Middle fan speed");
  }
    if(steps == "III")
  {
    digitalWrite(D0,0);
    digitalWrite(D1,0);
    digitalWrite(D2,1);
    server.send(200,"text/plain","High fan speed");
  }
  Serial.println(steps);
}
