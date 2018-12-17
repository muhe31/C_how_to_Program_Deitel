#include <stdio.h>

int main(void){

    int weightInPounds;
    int heightInInches;
    float BmiValues;

    printf("Enter WeightInPounds: ");
    scanf("%d", &weightInPounds );

    printf("Enter heightInInches: ");
    scanf("%d", &heightInInches);

    BmiValues = (weightInPounds * 703)/(heightInInches * heightInInches);

    printf("Your BMI value equals: %f\n", BmiValues);
    printf("BMI VALUES");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");

    return 0;
}
