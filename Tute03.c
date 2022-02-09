/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int num;       //declare variables
  int i, sum = 0;

  printf("Enter a value for n :");
  scanf("%d",&num);   //read a value for n from keyboard

  for(i=1;i<=num;++i)
  {
    sum = sum + i;   //calculate sum
  }

  printf("sum is : %d",sum);   //print sum
  
  return 0;
}

