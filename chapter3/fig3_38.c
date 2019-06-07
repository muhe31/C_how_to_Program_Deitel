#include <stdio.h>

int main(void){

    int asterisk = 1;

    while(asterisk <= 100){
        printf("* ");

        if(asterisk % 10 == 0){
            printf("\n");
        }

        asterisk++;
    }

    printf("\n");
    return 0;
}