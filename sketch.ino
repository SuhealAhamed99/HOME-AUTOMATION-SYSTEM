#define BLYNK_TEMPLATE_ID "TMPL3h4qbt_Ap"
#define BLYNK_TEMPLATE_NAME "Home Automation System Task 2"
#define BLYNK_AUTH_TOKEN "GuEgdGUGeu7dVqBLerqPA9bgImlcq7Gb"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h>

char ssid[] = "Wokwi-GUEST";
char password[] = "";

// Pin Definitions
#define RED_LED     2
#define GREEN_LED   4
#define SERVO_PIN   5

#define RED_BTN     14
#define GREEN_BTN   13
#define FAN_BTN     12

Servo fanServo;

bool redState = false;
bool greenState = false;
bool fanState = false;

void setup() {
  Serial.begin(115200);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  pinMode(RED_BTN, INPUT_PULLUP);
  pinMode(GREEN_BTN, INPUT_PULLUP);
  pinMode(FAN_BTN, INPUT_PULLUP);

  fanServo.attach(SERVO_PIN);
  fanServo.write(90); // Fan OFF position

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
  Serial.println("Home Automation Task 2 Started");
}

// Blynk Button Controls
BLYNK_WRITE(V0) {
  redState = param.asInt();
  digitalWrite(RED_LED, redState);
  Serial.println(redState ? "Red LED ON (Blynk)" : "Red LED OFF (Blynk)");
}

BLYNK_WRITE(V1) {
  greenState = param.asInt();
  digitalWrite(GREEN_LED, greenState);
  Serial.println(greenState ? "Green LED ON (Blynk)" : "Green LED OFF (Blynk)");
}

BLYNK_WRITE(V2) {
  fanState = param.asInt();
  fanServo.write(fanState ? 180 : 90);
  Serial.println(fanState ? "Fan ON (Blynk)" : "Fan OFF (Blynk)");
}

void loop() {
  Blynk.run();

  // Red Button
  if (digitalRead(RED_BTN) == LOW) {
    delay(200);
    redState = !redState;
    digitalWrite(RED_LED, redState);
    Serial.println(redState ? "Red LED ON (Button)" : "Red LED OFF (Button)");
    Blynk.virtualWrite(V0, redState);
    while (digitalRead(RED_BTN) == LOW);
  }

  // Green Button
  if (digitalRead(GREEN_BTN) == LOW) {
    delay(200);
    greenState = !greenState;
    digitalWrite(GREEN_LED, greenState);
    Serial.println(greenState ? "Green LED ON (Button)" : "Green LED OFF (Button)");
    Blynk.virtualWrite(V1, greenState);
    while (digitalRead(GREEN_BTN) == LOW);
  }

  // Fan Button
  if (digitalRead(FAN_BTN) == LOW) {
    delay(200);
    fanState = !fanState;
    fanServo.write(fanState ? 180 : 90);
    Serial.println(fanState ? "Fan ON (Button)" : "Fan OFF (Button)");
    Blynk.virtualWrite(V2, fanState);
    while (digitalRead(FAN_BTN) == LOW);
  }
}
