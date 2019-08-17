int relay = 3;//
int relay2 = 4;//
int relay3 = 5;//P
int relay4 = 6;//P
int butten = 10;

void setup() {

pinMode(relay,OUTPUT);
pinMode(relay2,OUTPUT);
pinMode(relay3,OUTPUT);
pinMode(relay4,OUTPUT);
pinMode(butten,INPUT);
  
}

void loop() {
  butten = digitalRead(butten);
  
   if (butten == HIGH) {
    digitalWrite(relay3, 1);
    delay(10000);
    digitalWrite(relay,1);
    delay(3000);
    digitalWrite(relay3,0);
    delay(2500);
    digitalWrite(relay,0);
    delay(2000);
    digitalWrite(relay2,1);
    delay(3500);
    digitalWrite(relay2,0);
    delay(2000);
    digitalWrite(relay,1);
    delay(3500);
    digitalWrite(relay,0);
    delay(2000);
    digitalWrite(relay2,1);
    delay(3500);
    digitalWrite(relay2,0);
    delay(3000);
    digitalWrite(relay,1);
    delay(3000);
    digitalWrite(relay4,1);
    delay(500);
    digitalWrite(relay,0);
    delay(15000);
    

  } else {
 
    digitalWrite(relay, 0);
    digitalWrite(relay2,0);
    digitalWrite(relay3,0);
    digitalWrite(relay4,0);

  }}
