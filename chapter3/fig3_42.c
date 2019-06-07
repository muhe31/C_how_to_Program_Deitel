#include <stdio.h> 

int main(void){
    
    float radius;
    float pi = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Diameter: %0.3f\n", 2 * radius);
    printf("Circumference: %0.3f\n", 2 * pi * radius);
    printf("Area: %0.3f\n", pi* radius * radius); 

    return 0; 
}