/*finding large number
a program that determines the winner of sales
contest would input number of units 
inputs 10 numbers and prints the largest number */
#include <stdio.h>

int main(void){
	int counter = 0;
	int number; 
	int largest = 0;
	
	while(counter <=10){
		printf("Enter numbers: ");
		scanf("%d", &number);
		
		if(number > largest){
			largest = number;
		}
		counter++;
	}
	
	printf("Largest number: %d", largest);
}