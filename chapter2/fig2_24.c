#include <stdio.h>

int main(void){

  int a;
  int odd , even;

  printf("Enter Integer: ");
  scanf("%d", &a);
  if(a % 2 == 0)
    printf("Even: %d\n", a);
  if(a % 2 != 0)
    printf("Odd: %d\n", a);

    return 0;
}
