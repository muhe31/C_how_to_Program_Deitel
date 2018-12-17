//salary calculator

#include <stdio.h>
int main(void){
	
	int hours, overtime;
	float total,straight,overpay;
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d", &hours);
	
	while(hours != -1){
		printf("Enter hours rate of the worker($00.00): ");
		scanf("%f", &straight);
		if(hours > 40){
			overtime = hours - 40;
			overpay = 0.5*straight;
			total = hours * straight + overpay*overtime;
		}else{
			total = hours * straight;
		}
		
		printf("Salary is %.2f\n\n", total);
		
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours);
	}//end of while
	
	return 0;
}//end main