#include <Arduino.h>
#include "sevenSeg.h"

/* PUBLIC */

sevenSeg::sevenSeg(int segA, int segB, int segC, int segD, int segE, int segF, int segG, int segDP, int pol){
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(segDP, OUTPUT);
  _segA=segA;
  _segB=segB;
  _segC=segC;
  _segD=segD;
  _segE=segE;
  _segF=segF;
  _segG=segG;
  _segDP=segDP;
  if(pol==CC){
    SEGON=HIGH;
    SEGOFF=LOW;
  }
}

void sevenSeg::showNum(int num){
  switch(num){
    case 0:zero();break;        
    case 1:one();break;        
    case 2:two();break;        
    case 3:three();break;        
    case 4:four();break;        
    case 5:five();break;        
    case 6:six();break;        
    case 7:seven();break;        
    case 8:eight();break;        
    case 9:nine();break;        
  }
}
void sevenSeg::blank() {
  digitalWrite(_segA, SEGOFF);
  digitalWrite(_segB, SEGOFF);
  digitalWrite(_segC, SEGOFF);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGOFF);
  digitalWrite(_segDP, SEGOFF);
}

/* PRIVATE */

void sevenSeg::one() {
  digitalWrite(_segA, SEGOFF);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGOFF);
  digitalWrite(_segDP, SEGOFF);
}
void sevenSeg::zero() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGON);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGOFF);
  digitalWrite(_segDP, SEGOFF);
}
void sevenSeg::two() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGOFF);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGON);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void sevenSeg::three() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void sevenSeg::four() {
  digitalWrite(_segA, SEGOFF);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void sevenSeg::five() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGOFF);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void sevenSeg::six() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGOFF);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGON);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGON);
}
void sevenSeg::seven() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGOFF);
  digitalWrite(_segG, SEGOFF);
  digitalWrite(_segDP, SEGOFF);
}
void sevenSeg::eight() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGON);
  digitalWrite(_segE, SEGON);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGOFF);
}
void sevenSeg::nine() {
  digitalWrite(_segA, SEGON);
  digitalWrite(_segB, SEGON);
  digitalWrite(_segC, SEGON);
  digitalWrite(_segD, SEGOFF);
  digitalWrite(_segE, SEGOFF);
  digitalWrite(_segF, SEGON);
  digitalWrite(_segG, SEGON);
  digitalWrite(_segDP, SEGON);
}
