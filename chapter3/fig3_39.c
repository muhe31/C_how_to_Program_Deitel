#include <stdio.h> 

int main(void){

    int num;
    int rem;
    int count = 0;
    printf("Integer: ");
    scanf("%d", &num);

    while(num > 0){
        
        rem = num % 10;
        if(rem == 7){
            count++;
        }
        num = num / 10;
    }

    printf("Amount of sevens: %d\n", count);
    return 0;
}