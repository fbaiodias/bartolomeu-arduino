int pumpA1 = 2;
int pumpA2 = 3;

void setup() {
  Serial.begin(9600);
  pinMode(pumpA1, OUTPUT);
  pinMode(pumpA2, OUTPUT);
  digitalWrite(pumpA1, LOW);
  digitalWrite(pumpA2, LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  if(Serial.available()>0){
    char in = Serial.read();
    
    switch(in){
      case 'h':
      pump(); 
      //delay(500);
      //sleep();
      break;
      case 'l':
      sleep();
      break;
    }
  }
}

void pump() {
  digitalWrite(pumpA1, HIGH);
  digitalWrite(pumpA2, LOW);
}

void sleep() {
  digitalWrite(pumpA1, LOW);
  digitalWrite(pumpA2, LOW); 
}
