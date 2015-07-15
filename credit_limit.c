//credit card limit
#include <stdio.h>

int main(void){
	
	int account;
	float beg_balance,charges, credit, credit_limit;
	float total_balance;
	printf("Enter account number (-1 to end): ");
	scanf("%d", &account);
	
	while(account != -1){
	printf("Enter beginning balance: ");
	scanf("%f", &beg_balance);
	
	printf("Enter total charges: ");
	scanf("%f", &charges);
	
	printf("Enter total credits: ");
	scanf("%f",&credit);
	
	printf("Enter credit limit: ");
	scanf("%f", &credit_limit);
	total_balance = beg_balance + charges - credit;
	printf("Account:      %d\n",account);
	printf("Credit limit: %f.2\n",credit_limit);
	printf("Balance:      %.2f\n",total_balance);
	if(total_balance > credit_limit)
		printf("Credit Limit Exceeded\n");
	
	
	printf("Enter account number (-1 to end): ");
	scanf("%d", &account);
	}//end of while
	
	return 0;
}
