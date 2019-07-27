#include <stdio.h> 

int main(void){


    int i; 
    int j;
    int sum =0; 
    int n;

    //this number is to get how many numbers needing to sum
    printf("Enter amount of integer: ");
    scanf("%d", &j);

    //enter the for loop
    for(i =1; i <= j; i++){
        printf("enter sum %d: ", i);
        scanf("%d", &n );

        //sum the numbers
        sum = sum + n;
    }

    //print the sum 
    printf(" Sum is %d\n", sum);
    return 0;
}