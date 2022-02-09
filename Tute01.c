/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2;   //declare variables
  float ave;

  printf("Enter marks for subject 1 : ");
  scanf("%d",&mark1);   //read value for mark 1 from keyboard

  printf("Enter marks for subject 2 : ");
  scanf("%d",&mark2);   //read value for mark 2 from keyboard

  ave = (mark1 + mark2)/2.0;   //calculate average
  printf("Average mark is = %.2f",ave);   //display average

  return 0;

  
  return 0;
}

