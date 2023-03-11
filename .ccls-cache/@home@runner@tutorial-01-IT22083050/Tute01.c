/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {//main function begin

  float mark1,mark2,sum,average;//variable decleration

  printf("enter the mark for subject 01:");//user input
  scanf("%f",&mark1);
  printf("enter the mark for subject 02:");
  scanf("%f",&mark2);

  sum=mark1+mark2;//calculate the sum

  average=sum/2.0;//calculate the average

  printf("average of the two marks= %.2f",average);

  return 0;
}

