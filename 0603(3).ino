// C++ code
//
#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262



int buttonPin[8]={2,3,4,5,6,7,8,9};
void setup()
{
  pinMode(10, OUTPUT);
  pinMode( buttonPin[0], INPUT_PULLUP);
  pinMode( buttonPin[1], INPUT_PULLUP);
  pinMode( buttonPin[2], INPUT_PULLUP);
  pinMode( buttonPin[3], INPUT_PULLUP);
  pinMode( buttonPin[4], INPUT_PULLUP);
  pinMode( buttonPin[5], INPUT_PULLUP);
  pinMode( buttonPin[6], INPUT_PULLUP);
  pinMode( buttonPin[7], INPUT_PULLUP);
}

void loop()
{
  buttonPin[0]=digitalRead(2);
  buttonPin[1]=digitalRead(3);
  buttonPin[2]=digitalRead(4);
  buttonPin[3]=digitalRead(5);
  buttonPin[4]=digitalRead(6);
  buttonPin[5]=digitalRead(7);
  buttonPin[6]=digitalRead(8);
  buttonPin[7]=digitalRead(9);
  
  
  if(buttonPin[0] == LOW){
    tone(10,NOTE_C3,100  );
    delay(100 );
    noTone(10);
  }
   else if(buttonPin[1] == LOW){
    tone(10,NOTE_D3,100  );
    delay(100  );
    noTone(10);
  }
   else if(buttonPin[2] == LOW){
    tone(10,NOTE_E3,100  );
    delay( 100 );
    noTone(10);
  }
   else if(buttonPin[3] == LOW){
    tone(10,NOTE_F3, 100 );
    delay(100  );
    noTone(10);
  }
   else if(buttonPin[4] == LOW){
    tone(10,NOTE_G3, 100 );
    delay(100  );
    noTone(10);
  }
   else if(buttonPin[5] == LOW){
    tone(10,NOTE_A3,100  );
    delay( 100 );
    noTone(10);
  }
   else if(buttonPin[6] == LOW){
    tone(10,NOTE_B3,100  );
    delay( 100 );
    noTone(10);
  }
   else if(buttonPin[7] == LOW){
    tone(10,NOTE_C4,100  );
    delay( 100 );
    noTone(10);
  }
  
    
}