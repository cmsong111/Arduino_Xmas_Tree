void tincle()
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
    delay(300);
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
    delay(300);
  }
}

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  tincle();
}