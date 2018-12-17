#include <stdio.h>

int main(void){

  int r;

  printf("Enter Radius: ");
  scanf("%d", &r);

  printf("radius: %f\n", 1.0 * r);
  printf("Area: %f\n", 3.14159 * r * r);
  printf("Circumference: %f\n", 2 * 3.14159 * r);
  printf("Diameter: %f\n", 2.0 * r);

  return 0;
}
