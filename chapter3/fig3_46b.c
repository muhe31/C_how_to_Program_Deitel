#include <stdio.h> 

int main(void){
    
    int number = 0;
    int factorial = 1;
    int backup;
    int i=1;
    float sum = 1; 

    printf("enter a positive integer: ");
    scanf("%d", &number);

    /* Control data input */
    while (number < 0) {
	printf("enter a POSITIVE integer: ");
	scanf("%d", &number);
    }

    backup = number;

     /* Calculating factorial */
    while (i <= number) {
	factorial *= i;
    sum = sum + (1 / (float)factorial);
	i++;

    }
    
   

    /* printing */
    printf("%d! = %d\n", backup, factorial);
    printf("Constant e: %f\n", sum);

    return 0;
}