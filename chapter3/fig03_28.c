/*fig3.10: fig03_10.c
analysis of examination result*/

#include <stdio.h>

int main(void){
	int passes = 0;
	int failures =0;
	int student =1;
	int result;
	
	while(student <= 10){
		printf("Enter result(1=passed,2=fail): ");
		scanf("%d", &result);
		
		if(result == 1){
			passes = passes + 1;
			student = student + 1;
		}else if(result == 2){
			failures = failures + 1;
			student = student + 1;
		}else{
			printf("Enter result(1=passed,2=fail): ");
			scanf("%d", &result);
			//student = student -1;
			printf("student # %d", student);
		}
		
		
	}
	
	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);
	
	if(passes > 8){
		printf("Bonus to instructor!\n");
	}
	return 0;
}