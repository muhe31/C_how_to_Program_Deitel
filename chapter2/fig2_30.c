#include <stdio.h>

int main(void){

  int number;
  int first, tenth, hundredth, thousandth;
  int tenthousandth;
  printf("Enter five digit integer: ");
  scanf("%d", &number);

  first = number/10000;
  tenth = (number/1000) % 10;
  hundredth = (number/100) % 10;
  thousandth = (number/10) % 10;
  tenthousandth = (number % 10);
  printf("%d\t%d\t%d\t%d\t", first,tenth,hundredth,thousandth);
  printf("%d\n",tenthousandth);

  return 0 ;



}
