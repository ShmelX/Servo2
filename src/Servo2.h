#ifndef SERVO2_
#define SERVO2_

#include <Arduino.h>
#include <Servo.h>
 
class Servo2
{
public:
    void attach(int out, int minPulse, int maxPulse, int maxRotation);
    void write(float rotation);
    
private:
    int _minPulse, _maxPulse;
    float _maxRotation;
    float _defPulse, _defRotation;
    Servo _servo;
};
 
#endif