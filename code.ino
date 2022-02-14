
void setup()
{
pinMode(A0, INPUT); //connenct rain sensor data pin to nodemcu Analog pin A0
pinMode(4, OUTPUT); //connenct LED to nodemcu digital pin D1
Serial.begin(9600);
}


void loop()
{

    if (analogRead(A0) <= 600) {
      digitalWrite(4,HIGH);
      Serial.println("Raining Start");
    } else {
      digitalWrite(4,LOW);
      Serial.println("Raining Stop");
    }
    Serial.println(analogRead(A0));

}
