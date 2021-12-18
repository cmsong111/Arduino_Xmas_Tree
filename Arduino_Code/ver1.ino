// tinkle algorithm
void slowy()
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
  randNumber = random(1);
  switch (randNumber)
  {
  case 0:
    slowy();
    break;
  
  default:
    break;
  }
  slowy();
}