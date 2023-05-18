#include "mbed.h"
DigitalOut LED_1(D2);
DigitalOut LED_2(D3);
DigitalOut LED_3(D4);
DigitalOut LED_4(D5);
AnalogIn Ain(A6);
// main() runs in its own thread in the OS
int main()
{
    float in = 0;
        while (true) {
            in = Ain*3.3;
            printf("Ain = %2.2f V\n",in);
            wait(0.1);
            /* set all the output at low voltage */
            LED_1=0;
            LED_2=0;
            LED_3=0;
            LED_4=0;
            if(in<0.6){//start of if and set condition: input<0.6V
                LED_1=0;
                LED_2=0;
                LED_3=0;
                LED_4=0;
            }//end of if
            if(in>=0.6&&in<1.2){//start of if and set condition: 0.6<=input<1.2V
                LED_1=1;
                LED_2=0;
                LED_3=0;
                LED_4=0;
            }//end of if
            if(in>=1.2&&in<1.8){//start of if and set condition: 1.2<=input<1.8V
                LED_1=1;
                LED_2=1;
                LED_3=0;
                LED_4=0;
            }//end of if
            if(in>=1.8&&in<2.4){//start of if and set condition: 1.8<=input<2.4V
                LED_1=1;
                LED_2=1;
                LED_3=1;
                LED_4=0;
            }//end of if
            if(in>=2.4){//start of if and set condition:input>=2.4V
                LED_1=1;
                LED_2=1;
                LED_3=1;
                LED_4=1;
            }//end of if
    }//end of while
}//end of main()
