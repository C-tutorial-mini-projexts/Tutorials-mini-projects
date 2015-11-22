#include<stdio.h>
#include<string.h>

#define MAX_NAME 30 

// define a new structure 
struct person {
	char fname[MAX_NAME];
	char lname[MAX_NAME];
	int age;

};
void printStruct(struct person);

int main(void){
	//populate the structure 
	struct person amjed;
	strcpy(amjed.fname , "amjed"); 
	strcpy(amjed.lname , "majid");
	amjed.age = 33; 
	// print the structure 
	printStruct(amjed);
return 0;
}
void printStruct(struct person aPerson){
	printf("The person name is %s %s\n", aPerson.fname , aPerson.lname);
	printf("The person age is %d \n", aPerson.age);
}
