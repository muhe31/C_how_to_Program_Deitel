#include <stdio.h> 

int main(void){
    
    float s1, s2, s3;

    printf("Triangle Side 1: ");
    scanf("%f", &s1);

    printf("Triangle Side 2: ");
    scanf("%f", &s2);

    printf("Triangle Side 3: ");
    scanf("%f", &s3);

    if ( (s1 + s2 < s3) || (s1 + s3 < s2) || (s2 + s3 < s1) ){
        printf("This can't be a triangle\n");
    }else{
        printf("side 1: %f\n", s1);
        printf("side 2: %f\n", s2);
        printf("side 3: %f\n", s3);
        printf("They could represent Triangle\n");
        
    }

    return 0;
}