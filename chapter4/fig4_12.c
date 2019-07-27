//calculate sum of even integers
#include <stdio.h>

int main(void){

    int i ;
    int count = 0;
    int sum = 0;

    for( i =1 ; i <= 30; i++){
   
       if( i % 2 == 0){
          
           sum = sum + i;
       }
        
    }

    printf("Sum of Even: %d\n", sum);
    return 0;
}