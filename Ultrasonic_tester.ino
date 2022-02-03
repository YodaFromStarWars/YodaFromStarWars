#include <NewPing.h>
#define Trigger_PIN 7 
#define Echo_PIN 6
#define Max_Distance 3000

unsigned int microseconds;
unsigned int Distance;
NewPing sonar(Trigger_PIN, Echo_PIN, Max_Distance);
void setup() {
  Serial.begin(115200);
  

}

void loop() {
  delay(100);
  microseconds = sonar.ping();
  Serial.print("Ping: ");
  Distance = sonar.convert_cm(microseconds);
  if (Distance != 0) {
    Serial.print(Distance);
    Serial.println("cm");

  }
  else{
    Serial.println("Error, sensor reading zero value");
  }

  

}
