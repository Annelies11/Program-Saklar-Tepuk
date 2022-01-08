#define sound 8
#define led 2
int a = 0;
void setup() {
  Serial.begin(9600);
  pinMode(sound, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
 int nilai = digitalRead(sound);
 Serial.println(nilai);
  if(nilai==LOW) {
    a++;
  if(a%2==0){
    digitalWrite(led, LOW);
  }
  if(a%2==1){
    digitalWrite(led, HIGH);
  }
  delay(300);
  }
}
