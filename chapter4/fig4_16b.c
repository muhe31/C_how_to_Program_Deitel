#include <stdio.h> 
//top down right triangle

int main(void){

    int i, j , n; 

    n = 10;

    for(i = 1; i <= n; i++){
        for(j=n; j>= i; j--){
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}