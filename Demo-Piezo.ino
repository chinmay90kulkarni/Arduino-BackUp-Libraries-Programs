int sensoroutput = 0; // A0 the analog pin connected to the sensor  

void setup()
{
Serial.begin(9600);
}
void loop()
{
int value = analogRead(sensoroutput);  // function to read analog voltage from sensor
Serial.println(value);

delay(1000); // to make the LED visible
} 
