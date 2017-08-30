#define REEDPIN 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(REEDPIN, INPUT);
}

void loop() {
 int reed=  digitalRead(REEDPIN);
 Serial.print("Reed "); Serial.println(reed);

  //if reed == 0, door closed, else door is open

 if(reed == 0)
    Serial.println("Door closed");
 else
    Serial.println("Door open");
 delay(2000);
}
