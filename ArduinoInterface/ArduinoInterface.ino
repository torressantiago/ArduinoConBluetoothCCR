#define LEDVERDE 4
#define LEDAMARILLO 3
#define LEDROJO 2

#define LEDERROR 5
#define LEDCHECK 6

void setup() {
  Serial.begin(115200);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAMARILLO, OUTPUT);
  pinMode(LEDROJO, OUTPUT);
  pinMode(LEDERROR, OUTPUT);
}


void loop() {
  if (Serial.available() >= 1) {
    char entrada = Serial.read();

    if (entrada == '1') {
      digitalWrite(LEDVERDE, HIGH);
      digitalWrite(LEDCHECK, HIGH);
      digitalWrite(LEDERROR, LOW);
    }

    else if (entrada == '2') {
      digitalWrite(LEDAMARILLO, HIGH);
      digitalWrite(LEDCHECK, HIGH);
      digitalWrite(LEDERROR, LOW);
    }
    else if (entrada == '3') {
      digitalWrite(LEDROJO, HIGH);
      digitalWrite(LEDCHECK, HIGH);
      digitalWrite(LEDERROR, LOW);
    }
    else if (entrada == '4') {
      digitalWrite(LEDVERDE, LOW);
      digitalWrite(LEDCHECK, HIGH);
      digitalWrite(LEDERROR, LOW);
    }
    else if (entrada == '5') {
      digitalWrite(LEDAMARILLO, LOW);
      digitalWrite(LEDCHECK, HIGH);
      digitalWrite(LEDERROR, LOW);
    }
    else if (entrada == '6') {
      digitalWrite(LEDROJO, LOW);
      digitalWrite(LEDCHECK, HIGH);
      digitalWrite(LEDERROR, LOW);
    }
    else if (entrada == '7') {
      digitalWrite(LEDVERDE, HIGH);
      digitalWrite(LEDAMARILLO, HIGH);
      digitalWrite(LEDROJO, HIGH);
      digitalWrite(LEDCHECK, HIGH);
      digitalWrite(LEDERROR, LOW);
    }
    else if (entrada == '8') {
      digitalWrite(LEDVERDE, LOW);
      digitalWrite(LEDAMARILLO, LOW);
      digitalWrite(LEDROJO, LOW);
      digitalWrite(LEDCHECK, HIGH);
      digitalWrite(LEDERROR, LOW);
    }

    else {
      digitalWrite(LEDERROR, HIGH);
      digitalWrite(LEDVERDE, LOW);
      digitalWrite(LEDAMARILLO, LOW);
      digitalWrite(LEDROJO, LOW);
      digitalWrite(LEDCHECK, LOW);
    }
  }
}
