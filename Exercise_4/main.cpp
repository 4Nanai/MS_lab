#include "mbed.h"
DigitalOut G(D5);
DigitalOut A(A1);
DigitalOut B(A2);
// main() runs in its own thread in the OS
int main()
{
    while (true) {//start of while loop
        A = 0;//initialize A output
        B = 0;//initialize B output
        G = 1;//give G high voltage to lighten Y0 Y1 Y2 Y3
        wait(1.0);//wait 1s
        G = 0;//give G low voltage to turn off Y0
        wait(1.0);//wait 1s
        A = 1;// give A high voltage to turn on Y0 and turn off Y1
        wait(1.0);//wait 1s
        A = 0;
        B = 1;//give A low boltage and B high voltage to turn on Y1 and turn off Y2
        wait(1.0);//wait 1s
        A=1;//give A high voltage to turn on Y2 and turn off Y3
        wait(1.0);//wait 1s
    }//end of while
}//end of main()

