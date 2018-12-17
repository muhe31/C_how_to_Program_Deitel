/*ARITHMETIC*/
#include <stdio.h>

int main(void){

  int a , b,sum,product;
  int difference,quotient, Remainder;

  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);

  Remainder = a%b;
  sum = a + b;
  product = a*b;
  difference = a -b;
  quotient = a/b;

  printf("Sum: %d\n", sum);
  printf("product: %d\n", product);
  printf("difference: %d\n", difference);
  printf("quotient: %d\n", quotient);
  printf("Remainder: %d\n", Remainder); 
}
