#include "mbed.h"
BusOut display(D2, D3, D4, D5, D6, D9, D10, D11); //secgments A, B, C, D, E, F, G, DP
// main() runs in its own thread in the OS
int main()
{
    int t=0;
    while (true) {//start of while
        if(t<75){//start of if
        for (int i = 0; i < 15; i++ ){//start of for
            switch(i){//start of switch
                case 0:
                    display = 0x3F;
                    break;//display 0
                case 1:
                    display = 0x06;
                    break;//display 1
                case 2:
                    display = 0x5B;
                    break;//display 2
                case 3:
                    display = 0x4F;
                    break;//display 3
                case 4:
                    display = 0x66;
                    break;//display 4
                case 5:
                    display = 0x6D;
                    break;//display 5
                case 6:
                    display = 0x7D;
                    break;//display 6
                case 7:
                    display = 0x07;
                    break;//display 7
                case 8:
                    display = 0x7F;
                    break;//display 8
                case 9:
                    display = 0x67;
                    break;//display 9
                case 10:
                    display = 0x76;
                    break;//display H
                case 11:
                    display = 0x79;
                    break;//display E
                case 12:
                    display = 0x38;
                    break;//display L
                case 13:
                    display = 0x73;
                    break;//display P
                case 14:
                    display = 0x00;//display nothing
                    break;
            }//end of switch
            t++;
        wait(0.2);//display with interval 0.5s
        }//end of for
        }//end of if
        else{//strat of else
            display = 0x00;//display nothing
        }//end of else
    }//end of while
}//end of main

