#include <stdio.h>

int main(void){

  int a, b;

  printf("Enter two Integers: ");
  scanf("%d %d", &a, &b);

  if(b % a == 0)
    printf("%d is multiple of %d\n", a, b);
  else
    printf("%d is not multiple of %d\n", a, b);
    return 0;
}
