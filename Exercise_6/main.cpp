#include "mbed.h"
AnalogOut Aout(A4);
// main() runs in its own thread in the OS
int main()
{
    while (true) {
        Aout = 0.1515;//0.1515*3.3 V = 0.5 V
        wait(5.0);
        Aout = 0.3030;//0.3030*3.3 V = 1.0 V
        wait(5.0);
        Aout = 0.6061;//0.6061*3.3 V = 2.0 V
        wait(5.0);
        Aout = 0.7576;//0.7576*3.3 V = 2.5 V
        wait(5.0);
    }
}
