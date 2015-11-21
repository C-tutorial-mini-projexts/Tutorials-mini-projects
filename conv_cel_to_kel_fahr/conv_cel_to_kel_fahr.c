#include <stdio.h>
#include <stdlib.h>

int main(void){
	// varialbles to hold the values
	float c,f,k;
	
	//Prompt the user to enter temperature in celslus 
	puts("Please enter the temperature degree in celslus");
	scanf("%f" , &c);
	//Processing
	f = c * (9.0/5.0) + 32;
	k = c + 273 ;

	//Output
	printf("The temperture is :\n%.1f C \n%.1f K \n%.1f F \n", c, k, f);
	
}
