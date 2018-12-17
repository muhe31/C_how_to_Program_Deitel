/*arithmetic, Largest Value and Smallest Value*/
#include <stdio.h>

int main(void){

  int one,two,three;
  int sum, average,product;
  int small, smallest, large,largest;

  printf("Enter three integers: ");
  scanf("%d%d%d", &one,&two,&three);

  sum = one + two + three;
  product = one * two * three;
  average = (one + two + three) / 3;

  //largest value
  if(one < two){
    small = one;
    if(small < three){
      smallest = small;
    }
  }

  if(two < one){
    small = two;
    if(small < three){
      smallest = small;
    }
  }

  if(three < one){
    small = three;
    if(small < two){
      smallest = small;
    }
  }

  //largest
    if(one > two){
      large = one;
      if(large > three){
        largest = large;
      }
    }

    if(two > one){
      large = two;
      if(large > three){
        largest = large;
      }
    }

    if(three > one){
      large = three;
      if(large > two){
        largest = large;
      }
    }

    printf("Sum: %d\n",sum);
    printf("Average: %d\n",average);
    printf("Product: %d\n", product);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
  return 0;
}
