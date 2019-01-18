/*(Find the Two Largest Numbers) Using an approach similar to Exercise 3.24,
find the two largest values of the 10 numbers. [Note: You may input each
number only once.]*/
//fig3.28.c

#include <stdio.h>

int main(void){

	int counter=1;
	int number;
	int large1=0, large2=0;

	while(counter <= 10){

		printf("Enter numbers: ");
		scanf("%d", &number);

		if(number > large1){
			large2 = large1;
			large1 = number;

		}else if(number > large2){
			large2 = number;
		}
		counter++;
	}

	printf("Large1 = %d\n", large1);
	printf("Large2 = %d\n", large2);
}
