#include "mbed.h"               
DigitalOut vcc(D11);                
DigitalOut vout(D4);            
DigitalIn switchinput(A1);
DigitalOut vg(D10);     
DigitalOut ve(D12);     
int main() {                
    while(1) {
        vcc = 1;//provide vcc with power supply
        ve = 1; //set Pin E HIGH
        vg = 1; //output 3.3V
        if(switchinput==0) {//when input is 3.3V, start a loop
            vout = 0;   
            wait_us(1000);
            vout = 1;
            wait_us(1000);//output a 500Hz square wave
        }   //end of if
        else if(switchinput==1){//when input is 0, start of else
            vout = 0;
            wait_us(2500);
            vout = 1;
            wait_us(2500);//output a 200Hz square wave
        }   //end of else
    }   //end of while(1)
}   //end of main()


