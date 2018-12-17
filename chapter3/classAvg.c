#include <stdio.h>
//Fig. 3.6: fig03_06.c : classAvg.c
//class average program with Counter-controlled repetition
/* A class of ten students took a quiz.
The grades (integers in the range 0 to 100) for this quiz are available to you.
Determine the class average on the quiz.*/
int main(void){
  int grade ;
  int total = 0; //initialize total
  int average;
  int counter =1; // initialize loop counter


    while(counter <= 10){
      printf("Enter you grade %d: ",counter);
      scanf("%d", &grade);

      total = total + grade;

      counter = counter +1;
    }

    average = total / 10 ;

    printf(" Class average is: %d\n", average);

  return 0;
}
