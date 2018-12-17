#include <stdio.h>

int main(void){

  int a, b, c, d, e;
  int max, min;

  printf("Enter five integers: ");
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

  /*min*/
  min = a;
  if(b < min)
    min = b;
  if(c < min)
    min = c;
  if(d < min)
    min = d;
  if(e < min)
    min = e;

    printf("Smallest: %d\n", min);

  /*max */
  max = a;
  if(b > max)
    max = b;
  if(c > max)
    max = c;
  if(d > max)
    max = d;
  if(e > max)
    max = e;

    printf("Largest: %d\n", max);

  return 0;
}
