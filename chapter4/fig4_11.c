/*find the smallest number */
#include <stdio.h> 

int main(void){

    int count;
    int i;
    int a;
    int min = 9999 ;

    printf("Enter amount of values to compare: ");
    scanf("%d", &i);

    for(count= 1; count <= i ; count++){

        printf("Enter # %d: ", count);
        scanf("%d", &a);

        if(a < min){
            min = a;
        }
    }

    printf("Smallest Number: %d\n", min);

    return 0;
}