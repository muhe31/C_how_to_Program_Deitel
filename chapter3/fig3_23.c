/*
(Printing Numbers from a Loop) Write a program that utilizes looping
to print the num- bers from 1 to 10 side by side on the same
line with three spaces between numbers.
*/
#include <stdio.h>
int main(void){
  int i=1;

  while(i <=10){
    printf("%d ", i);

    i++;
  }

  printf("\n");
  return 0;
}
