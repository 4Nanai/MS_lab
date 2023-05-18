
/*Graduated Night light with Seed Grove Ambient Light sensor
Casey Lively
March 2016*/

//Read in ambient light sensor with mbed LPC1768
#include "mbed.h"

AnalogIn sensor(A6);//
DigitalOut led1(D3);
DigitalOut led2(D5);
DigitalOut led3(D6);
DigitalOut led4(D9);

int main() {
    float val;
    float threshold = .03; //User specified for night-light mode. Set to .03 for light measurement mode
    while(1) {
        val = sensor.read();
        printf("Sensor reading: %2.2f - %2.2f\r\n", val, (float)(1023-val)*10/val);
        
        if(val >= 0.45)
             led4 = 1;
        else
            led4 = 0;
        
        if(val >= 0.5)
            led3 = 1;
        else
            led3 = 0;
            
        if(val >= 0.55)
            led2 = 1;
        else
            led2 = 0;
            
        if(val >= 0.6)
            led1 = 1;
        else
            led1 = 0;
        
       
        wait(0.1);
    }//end while(1)
}//end Main
