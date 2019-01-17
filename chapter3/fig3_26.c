/*
(Tabular Output) Write a program that utilizes looping to
produce the following table of values:
*/
#include <stdio.h>

int main(void){
  int n=3, i;
	printf("A\tA+2\tA+4\tA+6\n");
	while(n <= 15){

		printf("%d\t%d\t%d\t%d\n", n,n+2,n+4,n+6);

		n = n+3;

	}

		return 0;

}
