
  const int buttonPin = 2;
  const int ledPin1 = 13;
  int buttonState =0; 
  const int ledPin2 = 12;


void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin1,OUTPUT);
    pinMode(ledPin2,OUTPUT);
    pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   buttonState = digitalRead(buttonPin);
   if(buttonState == HIGH){
           digitalWrite(ledPin1,HIGH);
           digitalWrite(ledPin2,HIGH);
          
                          }
   else{
        
    digitalWrite(ledPin1 ,LOW);
    digitalWrite(ledPin2,LOW);
        }

}
