#include <stdio.h>

int main(void){

  int i=1, j=1;
  int row;
  int column;

  printf("enter row: ");
  scanf("%d", &row);

  printf("Enter Column: ");
  scanf("%d", &column);

  while(i <= row){
    
    if(i == 1 || i == row){

      while(j <= column){
        printf("*");
        j++;
      }
     // printf("/n");
      j =1;
    }else if(i > 1 && i < row ){
      while(j<= column){
         if(j == 1 || j == column){
          printf("*");
        }else{
        printf(" ");
        }
        j++;
      }
      j = 1;
    }

    printf("\n");
    i++;
  }

    
  
}
