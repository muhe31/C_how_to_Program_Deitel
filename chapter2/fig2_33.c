#include <stdio.h>
/* car pooling saving calculator
it calculates daily saving costs
reduce carbon emission
reduce traffic congestion*/
int main(void){

  int totalMilesDay;
  float costPerGallon;
  float averageMiles;
  float parkingFeeDay;
  float TotalGallon;
  float tollsDay;
  float cost;
  float total;


  printf("Enter Total Miles per Day: ");
  scanf("%d",&totalMilesDay);
  printf("Enter Cost per Gallon of Gasoline: ");
  scanf("%f", &costPerGallon);
  printf("Enter Average miles per Gallon: ");
  scanf("%f", &averageMiles);
  printf("Enter Parking Fee per Day: ");
  scanf("%f", &parkingFeeDay);
  printf("Enter Tolls per Day: ");
  scanf("%f", &tollsDay);

  TotalGallon = totalMilesDay / averageMiles;

  cost = (TotalGallon * costPerGallon);

  total = cost + parkingFeeDay + tollsDay;

  printf("Cost of by Mileage: %f\n", cost);
  printf("Total Cost without Rideshare: %f\n", total);

  return 0;

}
