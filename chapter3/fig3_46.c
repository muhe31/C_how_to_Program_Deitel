#include <stdio.h> 

int main(void){
    //factorial 
    int n ;
    int count = 1; 
    int temp;
    int sum = 1; 
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    sum = temp;
    if(n > 0){
          printf("%d!: %d ", temp, temp);
        while (n != 0){
            printf("*");
            
            n = n - 1;
            printf(" %d ", n);
             if(n != 0){
                 sum = sum * n;
             }
            count++;
        }
        printf("\n");
        printf("The sum is: %d\n", sum);
        
    }else{
        printf("This is Negative Number\n");
    }

   return 0; 
}