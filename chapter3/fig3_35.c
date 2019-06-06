#include <stdio.h>

int main(void){

    int n;
    int sum = 0;
    int r; //this is for the remainder
    int temp;

    printf("Enter 5 digit Number: ");
    scanf("%d", &n);
    temp = n;
    while( n > 0){
        r = n % 10; //get the remainder
       
        sum = sum * 10 + r;
         n = n / 10; 
    }
    n = temp;
    if(n == sum){
        printf(" This is a palindrome Number \n");
    }
    

    return 0;
}