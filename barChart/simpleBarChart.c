#include<stdio.h>
#include<stdlib.h>

int stats[] = {1,3,5,7,15,2,20};
// protoType functions
void drawBarChart(int arr[],int);	

int main(void){
	// Find the length of statically allocated array
	int arrLen = sizeof(stats) / sizeof(int);
	drawBarChart(stats, arrLen);
	return 0;
}

void drawBarChart(int arr[], int counter){
	
	// for loop style for c99 compiler
	int i;
	for(i = 0 ; i < counter ; i++){
		// for loop style flor c11 compiler
		printf("%3d:", arr[i]);
		for(int j = 0 ; j < arr[i] ; j++){
			printf("=");
		}
		printf("\n");
	}

}
