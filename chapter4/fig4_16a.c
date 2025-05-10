#include <stdio.h> 
//print right triangle
int main(void){
    int n, i, j;

    n = 10;

    for(i=1;i<=n ; i++){
        for(j=1; j <=i ; j++){
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}