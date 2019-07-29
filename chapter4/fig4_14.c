#include <stdio.h>

int main()
{
    int factorial = 1;
    int i;
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    for(i=n ; i >= 1 ; i--){

        printf("%d * ", i);
        factorial *= i;
    }
    
    printf("\n");
    printf("Factorial for %d: %d \n",n, factorial);
    return 0;

}