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

int melody[] = 
{
  NOTE_B3,NOTE_A3,NOTE_G3,NOTE_A3,NOTE_B3,NOTE_B3,NOTE_B3
};

int noteDurations[] =
{
  4,4,4,4,4,4,4
};

int ledPin[8]={2,3,4,5,6,7,8,9};
int ledState =0;
void setup()
{ 
  pinMode(10,INPUT);
  pinMode(ledPin[0],OUTPUT);
  pinMode(ledPin[1],OUTPUT);
  pinMode(ledPin[2],OUTPUT);
  pinMode(ledPin[3],OUTPUT);
  pinMode(ledPin[4],OUTPUT);
  pinMode(ledPin[5],OUTPUT);
  pinMode(ledPin[6],OUTPUT);
  pinMode(ledPin[7],OUTPUT);
}

void loop()
{
  int thisNote = 0;
  int noteDuration;
  int pauseBetweenNotes;
  for( thisNote = 0;thisNote < 8;thisNote++)
  {
    if(melody[thisNote] == NOTE_C3){
    digitalWrite(ledPin[0],HIGH);
    ledState=ledPin[0];
    }else if(melody[thisNote] == NOTE_D3){
      digitalWrite(ledPin[1],HIGH);
      ledState=ledPin[1];
    }else if(melody[thisNote] == NOTE_E3){
      digitalWrite(ledPin[2],HIGH);
      ledState=ledPin[2];
    }else if(melody[thisNote] == NOTE_F3){
      digitalWrite(ledPin[3],HIGH);
      ledState=ledPin[3]; 
    }else if(melody[thisNote] == NOTE_G3){
      digitalWrite(ledPin[4],HIGH);
      ledState=ledPin[4]; 
    }else if(melody[thisNote] == NOTE_A3){
      digitalWrite(ledPin[5],HIGH);
      ledState=ledPin[5]; 
    }else if(melody[thisNote] == NOTE_B3){
      digitalWrite(ledPin[6],HIGH);
      ledState=ledPin[6]; 
    }else if(melody[thisNote] == NOTE_C4){
      digitalWrite(ledPin[7],HIGH);
      ledState=ledPin[7]; 
    }
  
    noteDuration = 1000 / noteDurations[thisNote];
    tone(10,melody[thisNote],noteDuration);
    pauseBetweenNotes = noteDuration*1.3;
    delay(pauseBetweenNotes);
    noTone(10);
    
    digitalWrite(ledState,LOW);
  }
  
}