#ifndef Motor_h
#define Motor_h

#include <Arduino.h>

class Motor
{
public:
  Motor();
  Motor(int pinEN, int pinIN1, int pinIN2);
  void begin();

  void stop();
  void setSpeed(int speed);

  void setForward();
  void setBackward();

private:
  int _pinEN;
  int _pinIN1;
  int _pinIN2;

  void setDir(bool forward);
};

#endif
