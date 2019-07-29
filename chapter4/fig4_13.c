//calculate the product of odd integer
#include <stdio.h>

int main(void){

    int i;
    int sum = 1 ;

    for(i=1; i<= 15; i++){

        if( i % 2 != 0){
            printf("Sum: %d  i: %d\n", sum, i);
            sum = sum * i;
        }
    }

    printf("Sum of odd: %d\n", sum );
    return 0;
}