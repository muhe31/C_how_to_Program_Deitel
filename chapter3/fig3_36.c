#include <stdio.h>

int main(void){

    int num;
    int rem;
    int binary;
    int decimal = 0;
    int base = 1;

    printf("Enter a 4 digit binary number: ");
    scanf("%d", &num);

    binary = num; 

    while(num > 0){
        rem = num % 10;
        decimal = decimal + rem* base;

        num = num / 10;

        base = base * 2;

    }

    printf("Decimal value: %d\n", decimal);
    printf("Binary Value: %d\n", binary);
    
    return 0;
}