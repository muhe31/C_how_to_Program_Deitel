#include <stdio.h> 
//side of a right triagle
int main(void){

    int a, b, c;
    int pythag1; 
    int pythag2;
    int pythag3;
    printf("Enter sides with space: ");
    scanf("%d %d %d", &a, &b, &c);

    pythag1 = a*a + b*b ;
    pythag2 = a*a + c*c;
    pythag3 = b*b + c*c;

    if( pythag1 == c*c || pythag2 == b*b || pythag3 == a*a){
        printf("Right Triangle\n");
    }else{
        printf("Not right Triangle\n");
    }

    return 0;
}