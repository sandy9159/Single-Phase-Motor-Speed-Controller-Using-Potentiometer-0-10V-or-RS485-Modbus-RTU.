#include<ModbusRtu.h>
#include <RBDdimmer.h>
#define DATA  2
Modbus bus;
uint16_t modbus_array[DATA];

int SlaveID = 0;
#define Enable  5
#define Ref  A0
#define A  6
#define B  7
#define C  8
#define SYS  13
#define outputPin  3
#define zerocross  2

dimmerLamp dimmer(outputPin);
int outVal = 0;
int currentmilli = 0;
void setup()

{
 Serial.begin(9600);
 dimmer.begin(NORMAL_MODE, ON);
 pinMode(SYS,OUTPUT);
 pinMode(Enable,INPUT_PULLUP);
 pinMode(A,INPUT_PULLUP);
 pinMode(B,INPUT_PULLUP);
 pinMode(C,INPUT_PULLUP);
 pinMode(Enable,INPUT_PULLUP);
     
if (digitalRead(A)==0 && digitalRead(B)==1 && digitalRead(C)==1){
  SlaveID = 1;
}

if (digitalRead(A)==1 && digitalRead(B)==0 && digitalRead(C)==1){
  SlaveID = 2;
}

if (digitalRead(A)==1 && digitalRead(B)==1 && digitalRead(C)==0){
  SlaveID = 3;
}

if (digitalRead(A)==0 && digitalRead(B)==0 && digitalRead(C)==1){
  SlaveID = 4;
}

if (digitalRead(A)==0 && digitalRead(B)==1 && digitalRead(C)==0){
  SlaveID = 5;
}

if (digitalRead(A)==1 && digitalRead(B)==0 && digitalRead(C)==0){
  SlaveID = 6;
}

if (digitalRead(A)==0 && digitalRead(B)==0 && digitalRead(C)==0){
  SlaveID = 7;
}

if (digitalRead(A)==1 && digitalRead(B)==1 && digitalRead(C)==1){
  SlaveID = 0;
}



  bus = Modbus(SlaveID, 1, 4);          //Modbus slave ID as 1 and 1 connected via RS-485 and 4 connected to DE & RE pin of RS-485 Module
  bus.begin(9600);

  for (int i = 0; i < DATA; i++) {
    modbus_array[i] = 0;
  }

  digitalWrite(SYS,0);
dimmer.setPower(10);
   delay(100);
   dimmer.setPower(0);
   outVal = 0;
   delay(1000);
  
}


void loop(){

if (digitalRead(Enable)){
  digitalWrite(SYS,0);
  if (outVal==0){
   dimmer.setPower(0);
  }

  if (outVal>0){
    outVal = outVal-1;
   dimmer.setPower(outVal);
   delay(10);
  }
  
}


  
 if (!digitalRead(Enable)){

   if (SlaveID > 0 ){

  bus.poll(modbus_array, sizeof(modbus_array) / sizeof(modbus_array[0]));
   for (int i = 0; i < DATA; i++) {
   if (modbus_array[0] == 1 ) {
   outVal = modbus_array[1];
   outVal = map(outVal, 1, 100, 10, 96); 
    dimmer.setPower(outVal); 
  }

  if (modbus_array[0] == 0 ) {
    dimmer.setPower(0);
  }
}
   }

 if (SlaveID == 0 ) {
    digitalWrite(SYS,1);
    outVal = map(analogRead(0), 1, 1024, 10, 85); 
    dimmer.setPower(outVal); 
  }
  
  
   



  
   
}




}

