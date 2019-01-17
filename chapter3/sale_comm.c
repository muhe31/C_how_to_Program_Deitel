/*(Sales Commission Calculator) One large chemical company pays
its salespeople on a commission basis. The salespeople receive $200 per
week plus 9% of their gross sales for that week. For example,
a salesperson who sells $5000 worth of chemicals in a week receives $200
plus 9% of $5000, or a total of $650. Develop a program that will input
each salesperson’s gross sales for last week and will calculate and display
that salesperson's earnings. Process one salesperson's figures at a time.
*/
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
