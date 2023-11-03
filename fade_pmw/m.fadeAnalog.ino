
#define bloop 11

void setup() {

  pinMode(bloop, OUTPUT);
}

void loop() {
      
  
  int x = 1;
  for (int i = 0; i > -1; i = i + x) {
    analogWrite(bloop, i);
    if (i == 255) {
      x = -1; 
    }
    delay(5);
  }
}   



