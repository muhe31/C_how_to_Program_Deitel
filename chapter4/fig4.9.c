#include <stdio.h> 

int main(void){

    int counter = 1; 

    do{ 
        printf("%d ", counter);
        
    }while(++counter <= 10);

    printf("\n");

    return 0; 
}