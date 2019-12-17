#ifndef sevenSeg_h
#define sevenSeg_h

#include <Arduino.h>

#define CA 0
#define CC 1

class sevenSeg
{
  public:
    sevenSeg(int segA, int segB, int segC, int segD, int segE, int segF, int segG, int segDP, int pol);
    void showNum(int num);
    void blank();
  private:
    int _segA, _segB, _segC, _segD, _segE, _segF, _segG, _segDP;
    bool SEGON=LOW;
    bool SEGOFF=HIGH;
    void zero();
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();
};

#endif
