#include <stdio.h>

int main(void){

  int i=1, j=1;
  int row ;
  int column;

  printf("enter row: ");
  scanf("%d", &row);

  printf("Enter Column: ");
  scanf("%d", &column);

  while ( i <= row){

    while(j <= column){
      printf("*");
      j++;
    }
    j= 1;
    printf("\n");
    i++;
  }

  return 0;
}
