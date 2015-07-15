//sales commission calculator
#include <stdio.h>

int main(void){
	
	float sales, salary;

	printf("Enter sales in dollar (-1 to end): ");
	scanf("%f", &sales);
	
	while(sales != -1){
	salary = 200 + 0.09*sales;
	printf("Salary is: %.2f\n\n", salary);
	
	
	printf("Enter sales in dollar (-1 to end): ");
	scanf("%f", &sales);
	}
}