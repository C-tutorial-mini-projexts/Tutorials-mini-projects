#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float cm ;
	float inch;
	float foot;
	//prompt the user to enter a number 
	puts("Please enter the length in cm to be converted to inch and foot");
	// get input 
	scanf("%f", &cm);
	// convert to feet by dividing the input by 30.48 and then cast it to int  
	foot =  cm / 30.48;
	inch = 12* (foot - (int) foot );
	foot = (int) foot;
	printf("The length %.2f cm equals %.0f foot and %.2f incht\n", cm,foot,inch);
return 0;
}
