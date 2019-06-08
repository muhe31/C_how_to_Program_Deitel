#include <stdio.h> 

int main(void){

    int sum=0;
    int number; 

    for(number =1; number <=100; number += 2){
        sum += number;
    }

    return 0; 
}