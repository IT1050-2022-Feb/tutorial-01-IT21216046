/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float distance;  //declare  variables
  float amount;

  printf("Enter distance :");
  scanf("%f",&distance);    //read distance from keyboard

  if(distance <= 30 && distance > 0)  //check if the distance less than 30
  {
    amount = 50 * distance;   //calculate amount
  }
  else if(distance > 30)    //check if the distance greater than 30
  {
    amount = 50 * 30 + 40 * (distance-30);  //calculate amount

  }
  else
  {
    printf("Invalid input");   //error massage
    return -1;
    
  }

  printf("Amount is : %.2f",amount);  //display amount

  
  return 0;  //end of main function
}
