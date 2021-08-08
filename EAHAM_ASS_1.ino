// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);  //signal 1 red
   pinMode(12, OUTPUT);   //signal 1 yellow
   pinMode(11, OUTPUT);  //signal 1 green
   pinMode(10, OUTPUT);   //signal 2 red
   pinMode(9, OUTPUT);   //signal 2 yellow
   pinMode(8, OUTPUT);    //signal 2 green
   pinMode(7, OUTPUT);   //signal 3 red
  pinMode(6, OUTPUT);  //signal 3 yellow
  pinMode(5, OUTPUT);    //signal 3 green
  pinMode(4, OUTPUT);    //signal 4 red
  pinMode(3, OUTPUT);   //signal 4 yellow
  pinMode(2, OUTPUT);   //signal 4 green      
}
 
int time_slot=3,d=1;  //didn't know how to take input. 
void loop()
{
  if(time_slot==1)
  {
    for(int i=0;i<4;i++)
     digitalWrite(12-4*i, HIGH);  //all yellows on
     delay(1000); 
    for(int i=0;i<4;i++)
     digitalWrite(12-4*i, LOW);   //all yellows off
     delay(1000); 
  }
  else if(time_slot%2==0)
  {
  for(int i=1;i<5;i++)
  {
    if(i==d)                 //d=active signal no.
    {
      digitalWrite(16-3*d, LOW);  //red off
      digitalWrite(14-3*d, HIGH);  //green on
    }
    else
    {
      digitalWrite(16-3*i, HIGH);  //red on
    }
  }
    delay(3000);
    digitalWrite(15-3*d, HIGH);  //yellow on
    digitalWrite(14-3*d, LOW);  //green off
    delay(1000);
    digitalWrite(15-3*d, LOW);   //yellow off
    d=(d)%4+1;
  }
  else if(time_slot==3)
  {
    d=(d+1)%2;     
      for(int i=0;i<2;i++)
      {
        digitalWrite(10+3*d-6*i, LOW);  //red off
        digitalWrite(8+3*d-6*i, HIGH);  //green on 
        digitalWrite(13-3*d-6*i, HIGH);  //red on
      }
    delay(3000);
    for(int i=0;i<2;i++)
      {
         digitalWrite(8+3*d-6*i, LOW); //green off
        digitalWrite(9+3*d-6*i, HIGH);  // yellow on
      }
    delay(1000);
    for(int i=0;i<2;i++)
     digitalWrite(9+3*d-6*i, LOW);  //yellow off
  }
}
