#include <WiFi.h>
#include <WebServer.h>

WebServer server(80);

const char* ssid ="xxxxx";      // Replace with your Wi-Fi network name (SSID)
const char* password = "xxxxx"; // Replace with your Wi-Fi network password


String ledOn = "<a href=\"/Led_Off\"><button>Turn LED OFF</button></a>";
String ledOff = "<a href=\"/Led_On\"><button>Turn LED ON</button></a>";

void LedOn()
{
  digitalWrite(15, HIGH);
  server.send(200, "text/html", ledOn);
}

void LedOff()
{
  digitalWrite(15, LOW);
  server.send(200, "text/html", ledOff);
}

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
    delay(500);

  Serial.print("Local IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/Led_On", LedOn);
  server.on("/Led_Off", LedOff);

  server.begin();

  pinMode(15, OUTPUT);
  
  digitalWrite(15, LOW);
}

void loop()
{
  server.handleClient();
  delay(1);
}
