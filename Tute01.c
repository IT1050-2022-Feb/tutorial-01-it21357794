/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,avg;
   
   printf("\nEnter the marks:");
   printf("\nMark 01:");
   scanf("%f",mark1);
   printf("\nMark 02:");
   scanf("%f",mark2);
   
   avg=(float) (mark1+mark2)/2;
   printf("\nAverage=%.1f",avg);
   
  return 0;
}

