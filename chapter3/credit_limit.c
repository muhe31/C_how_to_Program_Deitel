 /*(Credit Limit Calculator)
 Develop a C program that will determine if a department store customer
 has exceeded the credit limit on a charge account.
 For each customer, the following facts are available:
	a) Account number: var accountNumber
	b) Balance at the beginning of the month: var begBalance
	c) Total of all items charged by this customer this month: var totalCharges
	d) Total of all credits applied to this customer's account this month:
	e) Allowed credit limit
The program should input each of these facts,
calculate the new balance (= beginning balance + charges – credits),
and determine if the new balance exceeds the customer's credit limit.
For those customers whose credit limit is exceeded, the program should
display the customer's account num- ber, credit limit,
new balance and the message “Credit limit exceeded.”
Here is a sample input/out- put dialog: */
#include <stdio.h>

int main(void){

	int accountNumber;
	float begBalance;
	float totalCharges, totalCredit, creditLimit;
	float totalBalance;
	printf("Enter account number (-1 to end): ");
	scanf("%d", &accountNumber);

	while(accountNumber != -1){
	printf("Enter beginning balance: ");
	scanf("%f", &begBalance);

	printf("Enter total charges: ");
	scanf("%f", &totalCharges);

	printf("Enter total credits: ");
	scanf("%f",&totalCredit);

	printf("Enter credit limit: ");
	scanf("%f", &creditLimit);
	totalBalance = begBalance + totalCharges - totalCredit;
	printf("Account:      %d\n",accountNumber);
	printf("Credit limit: %f.2\n",creditLimit);
	printf("Balance:      %.2f\n",totalBalance);
	if(totalBalance > creditLimit)
		printf("Credit Limit Exceeded\n");


	printf("Enter account number (-1 to end): ");
	scanf("%d", &accountNumber);
	}//end of while

	return 0;
}
