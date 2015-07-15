#include <stdio.h>

int main(void){
	
	float gallon;
	int miles;
	float answer;
	printf("Enter the gallon used (-1 to end): ");
	scanf("%f", &gallon);
	
	while(gallon != -1){
		printf("Enter the miles driven: ");
		scanf("%d", &miles);
		
		answer = miles/gallon;
		printf("The miles/gallon for this tank was %f\n\n", answer);
		
		printf("Enter the gallon used (-1 to end): ");
		scanf("%f", &gallon);
	}
}