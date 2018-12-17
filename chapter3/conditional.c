#include <stdio.h>

int main(void){

    int score = 76;

    float grade = 59.9999;
    printf("%s\n", grade >= 60? "Passed" : "Failed");

    //another to write a conditional statement
    score >= 60? printf("Passed") : printf("Failed");


    return 0;
}
