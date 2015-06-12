int buzz1 = 8;
int buzz2 = 9;
int stuff1[] = {1,2,3,2,1,1};
int stuff2[] = {1,1,1,1,1,1};
int counter1  = 0;
int counter2 = 0;

void playTwoNotes(String noteL, String noteR) {
  
}


void setup()  {
  for(int j = 0; j< 6; j++)  {
  pinMode(buzz1, OUTPUT);
  pinMode(buzz2, OUTPUT);
  for(int i = 0; i<1000; i++)  {
    if(counter1 == stuff1[j]){
      digitalWrite(buzz2,HIGH);
      counter1 = 0;
      }
    else  {
      counter1++;
      }
    
    if(counter2 == stuff2[j]){
      digitalWrite(buzz1,HIGH);
      counter2 = 0;
      }

    else  {
      counter2++;
      }
      
     delay(1);
     digitalWrite(buzz1,LOW);
     digitalWrite(buzz2,LOW);  
  }
}
}

void loop()  {

  

}
   
