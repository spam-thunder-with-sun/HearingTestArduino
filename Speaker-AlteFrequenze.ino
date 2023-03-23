const int buzzerPin = 9;    // connect the buzzer to pin 9

void setup() {
  // put your setup code here, to run once:
 pinMode(buzzerPin, OUTPUT);  // sets the  buzzer pin as an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0; i<10; i++ )
{
  switch(i)
  {
    case 0:
      tone(buzzerPin, 12000);
      delay(1500);
      noTone(buzzerPin);
    break;

    
    case 1:
      tone(buzzerPin, 13000);
      delay(1500);
      noTone(buzzerPin);
    break;

    
    case 2:
      tone(buzzerPin, 14000);
      delay(1500);
      noTone(buzzerPin);
    break;

    
    case 3:
      tone(buzzerPin, 15000);
      delay(1500);
      noTone(buzzerPin);
    break;

    
    case 4:
      tone(buzzerPin, 16000);
      delay(1500);
      noTone(buzzerPin);
    break;

    
    case 5:
      tone(buzzerPin, 17000);
      delay(1500);
      noTone(buzzerPin);
    break;

    case 6:
      tone(buzzerPin, 18000);
      delay(1500);
      noTone(buzzerPin);
    break;

    case 7:
      tone(buzzerPin, 19000);
      delay(1500);
      noTone(buzzerPin);
    break;

    case 8:
      tone(buzzerPin, 20000);
      delay(1500);
      noTone(buzzerPin);
    break;

    case 9:
      tone(buzzerPin, 21000);
      delay(1500);
      noTone(buzzerPin);
    break;
    }

  }
      while(1)
    {}
}
