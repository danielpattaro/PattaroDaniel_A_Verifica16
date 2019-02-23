long numeroRandom;
int r1=13;
int g1= 11;
int b1= 7;
int v1=5;
int ripetizioni=0;
void setup() {
  // put your setup code here, to run once:
  pinMode (r1, OUTPUT);
  pinMode (g1, OUTPUT);
  pinMode (b1, OUTPUT);
  pinMode (v1, OUTPUT);

 Serial.begin(4800);
 Serial.println("Seriale attiva");
 while(ripetizioni==0){
 Serial.println("Numero ripetizioni: ");
 while(Serial.available()==0){};
 ripetizioni=Serial.readString().toInt();
 }
}

void accensione (){
  numeroRandom = random(10000);
  int i=0;
  while (i<ripetizioni)
  {

    digitalWrite(r1, HIGH);
    delay(numeroRandom);
    digitalWrite(r1, LOW);
    digitalWrite(g1, HIGH);
    delay(numeroRandom);
    digitalWrite(g1, LOW);
    digitalWrite(b1, HIGH);
    delay(numeroRandom);
    digitalWrite(b1, LOW);
    digitalWrite(v1, HIGH);
    delay(numeroRandom);
    digitalWrite(v1, LOW);

    i++;
    
    }
    ripetizioni=0;
    setup();
  }

void loop() {
  // put your main code here, to run repeatedly:

accensione();

}
// ggg
