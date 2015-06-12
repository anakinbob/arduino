/*
  Melody
 
 Plays a melody 
 
 circuit:
 * 8-ohm  Left speaker on digital pin 8
 * 8-ohm  Right speaker on digital pin 9
 
 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe 

This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/Tone
 
 */
 #include "pitches.h"

// notes in the melody:
int melodyL[] = { NOTE_A2
 };
 int melodyR[] = { NOTE_C2
 };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurationsL[] = { 16
   };
int noteDurationsR[] = { 16
};

void setup() {
  // iterate over the notes of the melody:
  int length;
  if( sizeof(melodyL) > sizeof(melodyR))  {
    length = sizeof(melodyL);
  } else  {
    length = sizeof(melodyR);
  }
  for (int thisNote = 0; thisNote < length; thisNote++) {
    
    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDurationL = 1000/noteDurationsL[thisNote];
    int noteDurationR = 1000/noteDurationsR[thisNote];
    tone(8, melodyL[thisNote],noteDurationL);


    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotesL = noteDurationL * 1.30;
    delay(pauseBetweenNotesL);
    // stop the tone playing:
    noTone(8);
    tone(9, melodyR[thisNote],noteDurationR);
    int pauseBetweenNotesR = noteDurationR * 1.30;
    delay(pauseBetweenNotesL);
    noTone(9);    
  }
}

void loop() {
  // no need to repeat the melody.
}
