#include <sevenSeg.h>

#define SEGA 5
#define SEGB 4
#define SEGC 9
#define SEGD 10
#define SEGE 11
#define SEGF 6
#define SEGG 7
#define SEGDP 8

sevenSeg disp(SEGA,SEGB,SEGC,SEGD,SEGE,SEGF,SEGG,SEGDP,CA);

void setup() {
  Serial.begin(9600);
  disp.blank();
}

void loop(){
  if(Serial.available()>0){
    switch(Serial.read()){
      case '0': disp.showNum(0);break;
      case '1': disp.showNum(1);break;
      case '2': disp.showNum(2);break;
      case '3': disp.showNum(3);break;
      case '4': disp.showNum(4);break;
      case '5': disp.showNum(5);break;
      case '6': disp.showNum(6);break;
      case '7': disp.showNum(7);break;
      case '8': disp.showNum(8);break;
      case '9': disp.showNum(9);break;
      default: disp.blank();
    }
  }
}
