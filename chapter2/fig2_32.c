#include <stdio.h>

int main(void){

  float weightInPounds;
  float heightInInches;
  float BMI;

  printf("Enter your weight(lb): ");
  scanf("%f", &weightInPounds);
  printf("Enter your height(in): ");
  scanf("%f", &heightInInches);

  BMI = (weightInPounds * 703) / (heightInInches * heightInInches);

  printf("BMI VALUES:  %f\n", BMI);
  printf("Underweight: less than 18.5\n");
  printf("Normal:      between 18.5 and 24.9\n");
  printf("Overweight:  between 25 and 29.9\n");
  printf("Obese:       30 or greater\n");

  return 0;
}
