int encoderPin = 7;
int ledPin = 11;
int temp;
void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);
  pinMode(encoderPin, INPUT);

  Serial.begin(9600);
}


void loop() {

  // TODO1: read analog value from encoderPin, and write to serial monitor 
  //        using Serial.Println().
  
  int x= analogRead(encoderPin);
  //int y=map(x,0,1000,0,255);

  Serial.println(x);
  
  if(temp/10==x/10) {
    analogWrite(ledPin, 0);
  }else {
    analogWrite(ledPin, x/4);
  }
  temp = x;
  delay(50);
}
