#include <ESP32Servo.h>

int APin = 32; // thumb
int BPin = 33; // index
int CPin = 25; // middle
int DPin = 26; // ring
int EPin = 27; // pinky
int FPin = 14; // hand roll

Servo _thumb;
Servo _index;
Servo _middle;
Servo _ring;
Servo _pinky;
Servo _handRoll;

void letterA();
void letterB();
void letterC();
void letterD();
void letterE();
void letterF();
void letterG();
void letterH();
void letterI();
void letterJ();

void setup()
{

  Serial.begin(115200);

  _thumb.attach(APin);
  _index.attach(BPin);
  _middle.attach(CPin);
  _ring.attach(DPin);
  _pinky.attach(EPin);
  _handRoll.attach(FPin);
}

void loop()
{

  if (Serial.available() > 0)
  {
    char letter = Serial.read();

    switch (letter)
    {
    case 'A':
      letterA();
      break;
    case 'B':
      letterB();
      break;
    case 'C':
      letterC();
      break;
    case 'D':
      letterD();
      break;
    case 'E':
      letterE();
      break;
    case 'F':
      letterF();
      break;
    case 'G':
      letterG();
      break;
    case 'H':
      letterH();
      break;
    case 'I':
      letterI();
      break;
    case 'J':
      letterJ();
      break;
    default:
      break;
    }
  }
  else
  {
    // if the letter is not available, the hand will be in the default position
    // _thumb.write(90);
    // _index.write(90);
    // _middle.write(90);
    // _ring.write(90);
    // _pinky.write(90);
    // _handRoll.write(90);
  }

  delay(100);
}

void letterA()
{
  _thumb.write(120);
  _index.write(0);
  _middle.write(0);
  _ring.write(0);
  _pinky.write(0);
  _handRoll.write(90);
}

void letterB()
{
  _thumb.write(180);
  _index.write(180);
  _middle.write(180);
  _ring.write(180);
  _pinky.write(180);
  _handRoll.write(90);
}

void letterC()
{
  _thumb.write(140);
  _index.write(80);
  _middle.write(80);
  _ring.write(80);
  _pinky.write(80);

  _handRoll.write(90);
}

void letterD()
{
  _thumb.write(180);
  _index.write(180);
  _middle.write(0);
  _ring.write(0);
  _pinky.write(0);

  _handRoll.write(90);
}

void letterE()
{
  _thumb.write(160);
  _index.write(60);
  _middle.write(60);
  _ring.write(60);
  _pinky.write(60);

  _handRoll.write(90);
}

void letterF()
{
  _thumb.write(180);
  _index.write(0);
  _middle.write(180);
  _ring.write(180);
  _pinky.write(180);

  _handRoll.write(90);
}

void letterG()
{
  _thumb.write(180);
  _index.write(110);
  _middle.write(0);
  _ring.write(0);
  _pinky.write(0);

  _handRoll.write(180);
}

void letterH()
{
  _thumb.write(180);
  _index.write(120);
  _middle.write(110);
  _ring.write(0);
  _pinky.write(0);

  _handRoll.write(180);
}

void letterI()
{
  _thumb.write(180);
  _index.write(0);
  _middle.write(0);
  _ring.write(0);
  _pinky.write(180);

  _handRoll.write(90);
}

void letterJ()
{
  _thumb.write(0);
  _index.write(0);
  _middle.write(0);
  _ring.write(0);
  _pinky.write(180);

  _handRoll.write(60);
  delay(100);
  _handRoll.write(90);
  delay(100);
  _handRoll.write(120);
  delay(100);
  _handRoll.write(90);

  delay(1000);
}
