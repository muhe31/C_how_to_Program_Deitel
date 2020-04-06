#include <stdio.h> 
#include <math.h>

int main(void){

    double amountA, amountB, amountC;
    double amountD, amountE, amountF;
    double principal = 1000.0;
    double rateA = 0.05;
    double rateB = 0.06;
    double rateC = 0.07;
    double rateD = 0.08;
    double rateE = 0.09;
    double rateF = 0.10;
    int year; 

    printf("%4s%21s\n", "YEAR", "AMOUNT ON DEPOSIT");
    printf("A\n");
    for(year = 1; year <= 10; year++){    
        amountA = principal * pow(1.0 + rateA, year);
        printf("A: %4d%21.2f\n", year, amountA);
    }
    printf("B\n");
    for(year = 1; year <= 10; year++){  
        amountB = principal * pow(1.0 + rateB, year);  
        printf("B: %4d%21.2f\n", year, amountB);
    }
    printf("C\n");
    for(year = 1; year <= 10; year++){  
        amountC = principal * pow(1.0 + rateC, year);  
        printf("C: %4d%21.2f\n", year, amountC);
    }
    printf("D\n");
    for(year = 1; year <= 10; year++){  
        amountD = principal * pow(1.0 + rateD, year);  
        printf("D: %4d%21.2f\n", year, amountD);
    }
    printf("E\n");
    for(year = 1; year <= 10; year++){  
        amountE = principal * pow(1.0 + rateE, year);  
        printf("E: %4d%21.2f\n", year, amountE);
    }
    printf("F\n");
    for(year = 1; year <= 10; year++){  
        amountF = principal * pow(1.0 + rateF, year);  
        printf("F: %4d%21.2f\n", year, amountF);
    }
    return 0;
}