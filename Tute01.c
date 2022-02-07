/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  double mark1,mark2,avg;

printf("\nEnter the marks:");
printf("\nMark 01:");
scanf("%lf",mark1);
printf("\nMark 02:");
scanf("%lf",mark2);

avg=(double)(mark1+mark2)/2;

printf("\nAverage=%.1lf",avg);
  return 0;
}

