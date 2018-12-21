/* write four different
C statements that each add 1 to integer variable x*/

#include <stdio.h>

int main(void){

  int x = 1;
  int y = 4;


  printf("x: %d x = x+ 1 : %d\n", x, x+1 );

  y += 1;

  printf("y += 1: %d\n", y);

  x = 1 ;

  printf("++x: %d\n", ++x);

  printf("++x after: %d\n", x);

  x = 1;

  printf("x++: %d\n", x++);
  printf("x++ after: %d\n", x);


  return 0;

}
