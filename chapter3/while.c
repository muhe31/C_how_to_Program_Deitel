#include <stdio.h>
//program to find power of 3 larger than 100
int main(void){

    int product = 3;
    while( product <= 100 ){

        product = 3 * product;
        printf("%d\n", product);
    } //end of while



    return 0;
}
