// tinkle algorithm
void slowy_odd_even()
{
  int value = 5;
  int value2 = 255;
  for(int i = 0; i <25;i++)
  {
    analogWrite(9,value);
    analogWrite(10,value2);
    analogWrite(11,value);
    analogWrite(12,value2);
    analogWrite(13,value);
    value +=10;
    value2 -=10;
    delay(200);
  }
  value = 255;
  value2 = 5;
    for(int i = 0; i <25;i++)
  {
    analogWrite(9,value);
    analogWrite(10,value2);
    analogWrite(11,value);
    analogWrite(12,value2);
    analogWrite(13,value);
    value -=10;
    value2 +=10;
    delay(200);
  }
}

void slowy_all()
{
  int value = 0;
  for(int i = 0; i<255; i++)
  {
    analogWrite(9,value);
    analogWrite(10,value);
    analogWrite(11,value);
    analogWrite(12,value);
    analogWrite(13,value);
    value +=1;
  }
}

void very_fast_even_odd()
{
  int off = 0;
  int on = 255;
  analogWrite(9,on);
  analogWrite(10,off);
  analogWrite(11,on);
  analogWrite(12,off);
  analogWrite(13,on);
  delay(150);
  analogWrite(9,off);
  analogWrite(10,on);
  analogWrite(11,off);
  analogWrite(12,on);
  analogWrite(13,off);
  delay(150);
}

void very_fast_all()
{
  int off = 0;
  int on = 255;
  analogWrite(9,on);
  analogWrite(10,on);
  analogWrite(11,on);
  analogWrite(12,on);
  analogWrite(13,on);
  delay(150);
  analogWrite(9,off);
  analogWrite(10,off);
  analogWrite(11,off);
  analogWrite(12,off);
  analogWrite(13,off);
  delay(150);
}


//arduino setup
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

//main
int randNumber;
void loop()
{
  randNumber = random(3);
  switch (randNumber)
  {
  case 0:
    for(int i = 0; i<10;i++)
    {
      slowy_odd_even();
    }
  break;

  case 1:
  for(int i = 0; i<10;i++)
    {
      very_fast_even_odd();
    }
  break;

  case 2:
  for(int i = 0; i<10;i++)
    {
      slowy_all();
    }
  break;

  case 3:
  for(int i = 0; i<10;i++)
    {
      very_fast_all();
    }
  break;
  
  
  default: 
    break;
  }
}