// Motor Pin Connection to Arduino Uno
int ena = 5;
int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;
int enb = 10;
int button1 = 2;
int button2 = 3;
int button3 = 4;


void setup() {

  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
 
}

void loop() {

  if(digitalRead(button1)== HIGH){ // If the Frist Button is Pushed ...

    // Motor A Turns Clockwise at Max Speed
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    analogWrite(ena, 255); 
    // Motor B Turns Anti-Clockwise at Max Speed
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(enb, 255);
    delay(2000);
  }
  else{
    //Otherwise, Stop Motors
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
  }

  if(digitalRead(button2)== HIGH){ // If the second button is Pushed ...

    //First Motor Turns Anti-Clockwise at Max Speed
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
    analogWrite(ena, 255); 
    //Second Motor Turns Anti-Clockwise at Max Speed
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
    analogWrite(enb, 255); 
    delay(2000);
  }
  else{
    //Otherwise Stop the Motors
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
  }


  if(digitalRead(button3) == HIGH){ // If the Third Button is Pushed ...
    //First Motor Turns Clockwise at Half Speed
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    analogWrite(ena, 127); 
    //Second Motor Turns Clockwise at Half Speed
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(enb, 127); 
    delay(2000);
  }
  else{
    //Otherwise Stop the Motors
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
  }

// Stop the Motors From Rotating 
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
}
