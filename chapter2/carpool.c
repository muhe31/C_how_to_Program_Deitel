#include <stdio.h>

int main(void){
    int TotalMileDrivePerDay;
    int CostPerGallonGas;
    int AverageMilePerGallon;
    int ParkingFeesPerDay;
    int TollsPerDay;
    int TotalGallon;
    int TotalCost;

    printf("Enter Total Miles Driven Per Day: ");
    scanf("%d", &TotalMileDrivePerDay);
    printf("Enter Cost per Gallon For Gas: ");
    scanf("%d", &CostPerGallonGas);
    printf("Enter Average Miles Per Gallon: ");
    scanf("%d", &AverageMilePerGallon);
    printf("Enter Parking Fees Per Day: ");
    scanf("%d", &ParkingFeesPerDay);
    printf("Enter Tolls Per Day: ");
    scanf("%d", &TollsPerDay);

    //Total Cost
    TotalGallon = TotalMileDrivePerDay / AverageMilePerGallon;
    TotalCost = (CostPerGallonGas * TotalGallon) + ParkingFeesPerDay + TollsPerDay;

    printf("Total Cost is: %d\n", TotalCost);

}
