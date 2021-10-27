/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. 11 is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 6/19/2019
  by Christian Bravo
  added blinking of radio callsign W4ALF with added tone both in morse code!
  requires external led to appropriate pin and speaker for audio tone.
  
  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain...

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 11 as an output.
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  delay(2000); //initial pause for loop



  //  W
  tone(8,700,100);

   delay(200); 
 
  tone(8,700,300);

  
  delay(200);                         // delay between dot and dash
  
  tone(8,700,300);
 



  delay(1000);  // Delay between Characters

  // A
  digitalWrite(11, HIGH);   // DIT
  tone(8,700,100);
  noTone(8);
  //delay(100);                       // 
  digitalWrite(11, LOW); 

  delay(200); 
  
  digitalWrite(11, HIGH);   // DASH
  tone(8,700,300);
  noTone(8);
  //delay(300); 
  digitalWrite(11, LOW);
  

  delay(1000);  // Delay between Characters


  // L
  digitalWrite(11, HIGH);   // DIT
  tone(8,700,100);
  noTone(8);
  //delay(100);                       // 
  digitalWrite(11, LOW); 

  delay(200); 
  
  digitalWrite(11, HIGH);   // DAH
  tone(8,700,300);
  noTone(8);
  //delay(300); 
  digitalWrite(11, LOW);

  delay(200); 

  digitalWrite(11, HIGH);   // DIT
  tone(8,700,100);
  noTone(8);
  //delay(100);                       // 
  digitalWrite(11, LOW); 


  delay(200); 

  digitalWrite(11, HIGH);   // DIT
  tone(8,700,100);
  noTone(8);
  // delay(100);                       // 
  digitalWrite(11, LOW); 
  

  

  delay(1000);  // Delay between Characters

// F

  digitalWrite(11, HIGH);   // DIT
  tone(8,700,100);
  delay(100);                       // 
  digitalWrite(11, LOW); 

  delay(200); 

  digitalWrite(11, HIGH);   // DIT
  tone(8,700,100);
  delay(100);                       // 
  digitalWrite(11, LOW); 

  delay(200); 

  digitalWrite(11, HIGH);   // DAH
  delay(300); 
  tone(8,700,300);
  digitalWrite(11, LOW);

  delay(200); 
             
  digitalWrite(11, HIGH);   // DIT
  tone(8,700,100);
  delay(100);                       // 
  digitalWrite(11, LOW); 



}
