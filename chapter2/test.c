
#include <stdio.h>

int main(void){

//create a variable 
  int integer1;  // integer 1 
  int integer2;  // integer 2 
  int integer3;  // integer 3 
  int sum, product; 
  printf( "Enter an integer1! "); //display to request int 1 
  scanf(" %d", &integer1 ); // store to int1 

  printf("Enter an integer2! ");
  scanf(" %d", &integer2 );  // store for integer2 

  printf("Enter an integer3: ");
  scanf("%d", &integer3); 

sum = integer1 + integer2 + integer3;
product = integer1 * integer2 * integer3;

printf(" Sum is: %d \n", sum);
printf(" Product is: %d \n", product);




  }
