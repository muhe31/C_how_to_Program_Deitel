/*Comparing Integers*/
#include <stdio.h>

int main(void){

  int one, two;
  printf("Enter two Integers: ");
  scanf("%d%d", &one,&two);

  if(one > two){
    printf("%d is greater than %d\n",one,two);
  }

  if(two > one){
    printf("%d is greater than %d\n",two,one);
  }

  if(one == two){
    printf("%d is equal to %d\n", one,two);
  }

  return 0;
}
