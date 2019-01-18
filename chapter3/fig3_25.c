/*
(Tabular Output) Write a program that uses looping to print the
following table of values. Use the tab escape sequence, \t, in the printf
statement to separate the columns with tabs.
*/

#include <stdio.h>

int main(void){

  int i=1;
  printf("N\t10*N\t100*N\t1000*N\n\n");

  while(i <= 10){
    printf("%d\t%d\t%d\t%d\n", i, 10*i, 100*i, 1000*i);

    i++;
  }

  return 0;
}
