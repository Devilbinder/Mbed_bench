#include "mbed.h"

DigitalOut led1(LED1,0);
int main(void){


	while(1){
		led1 = !led1;
		ThisThread::sleep_for(100ms);

	}


 

}