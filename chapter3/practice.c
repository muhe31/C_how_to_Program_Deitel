#include <stdio.h>
int main(void){
	
	int i;
	
	for(i=1;i<=100; i++){
		
		if(i % 15 == 0){
			printf("i = %d, buzz Fizz\n",i);
		}else if(i%5==0){
			printf("i = %d, Buzz\n", i);
		}else if(i %3 == 0){
			printf("i= %d,  fizz\n", i);
		}else{
			printf("i = %d\n", i);
		}
	}
	return 0;
}