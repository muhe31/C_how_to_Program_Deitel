#include <stdio.h> 

int main(void){

    int count= 1;
    int million = 300000000;
    int test = 100000000;
    while(count <= million){

        if(count % test == 0){
            printf("%d\n", count);
        }
        
        count++;
    }

    return 0;
}