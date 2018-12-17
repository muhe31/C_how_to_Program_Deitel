/*Fig. 2.5: fig02_05.c
 addition program */
 #include <stdio.h>

 /*function main begins program execution*/
 int main ( void ){

   int integer1; //first number to be input by user
   int integer2; //second number to be input by user
   int sum; //variable in which sum will be stored


   printf( "Enter first integer:\n"); //prompt
   scanf( "%d", &integer1); //read an integer;

   printf( "Enter second Integer:\n");//prompt
   scanf( "%d", &integer2); //read an integer1

   //assign total to sum
   sum = integer1 + integer2;
   printf( "Sum is %d\n", sum);//print
   printf("Sum is %d\n", integer1 + integer2);

   return 0;
 }
