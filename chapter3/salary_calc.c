/*(Salary Calculator) Develop a program that will determine the gross pay
for each of several employees. The company pays “straight time” for the
first 40 hours worked by each employee and pays “time-and-a-half” for all
hours worked in excess of 40 hours. You’re given a list of the employees
of the company, the number of hours each employee worked last week and the
hourly rate of each employee. Your program should input this information
for each employee, and should determine and display the employee's gross
pay.*/

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
