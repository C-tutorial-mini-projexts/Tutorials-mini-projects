#include <stdio.h>
#include <stdlib.h>

void recuPrint(int,int);

int main(void){
	//Prompt the user for to enter the upper and lower bounds
	
	//A Function that print the counter 
	//call this function from within it and check if you reached the upper bound 
	recuPrint(5,10);
}

void recuPrint(int lower, int upper){
	int counter = lower; 
	if (counter - (upper+1) == 0) return;
	printf("Number= %d\n", counter);
	counter++;
	recuPrint(counter , upper);

}
