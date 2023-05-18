#include "mbed.h"
AnalogOut Aout(A4);
// main() runs in its own thread in the OS
int main()
{
    while (true) {
        for(float i = 0 ; i < 1 ; i = i+0.1){
            Aout = i;
            wait(0.001);
        }
    }
}

