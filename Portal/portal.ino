// constants won't change. They're used here to set pin numbers:
const int buttonPin = 0;     // the number of the pushbutton pin

const int rPin =  11;        // R LED pin
const int gPin =  10;        // G LED pin
const int bPin =  9;        // B LED pin

const int ledPin =  8;      // LED DO BOTAO DA MÃO

const int delayHIGH = 2000;  //DELAY ENTRE FADE IN/OUT
const int delaySTEP = 10;    //DELAY PARA STEP FADE
const int stepFade = 1;      //STEP PARA AJUSTE DE VELOCIDADE DO FADE

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
 // analogWriteRange(255);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(ledPin,HIGH);
    for(int i = 0; i<=255; i+=stepFade){
        analogWrite(rPin, i);
        analogWrite(gPin, i);
        analogWrite(bPin, i);
        delay(delaySTEP);
    }
    delay(delayHIGH);
    for(int i = 255; i>=0; i-=stepFade){
        analogWrite(rPin, i);
        analogWrite(gPin, i);
        analogWrite(bPin, i);
        delay(delaySTEP);
    }
    digitalWrite(ledPin,LOW);
  }
}
