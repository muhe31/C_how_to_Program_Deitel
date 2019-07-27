#include <stdio.h> 

int main(void){


    int i; 
    int j;
    int sum =0; 
    int n;
    printf("Enter amount of integer: ");
    scanf("%d", &j);

    for(i =1; i <= j; i++){
        printf("enter sum %d: ", i);
        scanf("%d", &n );

        sum = sum + n;
    }

    printf(" Sum is %d\n", sum);
    return 0;
}