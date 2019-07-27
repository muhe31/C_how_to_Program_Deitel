/*write a program that average a sequence of numbers */
#include <stdio.h>

int main(void){

    int counter = 0;
    int sum = 0; 
    int i ;

    do{
        printf("Enter number (9999 to exit): ");
        scanf("%d", &i);

        if(i == 9999){
            break;
        }
        sum = sum + i;

        counter++;
    }while(i != 9999);

    if(counter != 0){
        printf("Average: %f\n", (float)sum / counter);
    }
    return 0;
}