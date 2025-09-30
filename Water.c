//Water Bill Calculator
/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :Water Bill Calculator
Date:Week 3
*/
#include<stdio.h>

int main()
{
 //User inputs
   int water_units;
   float Total;
   
   printf("Enter Water units consumed:\n");
   scanf("%d",&water_units);
   
   //Conditions	
   if (water_units <= 30) {
       Total = water_units * 20;
    } else if (water_units <= 60) {
        Total = water_units * 25;
    } else {
        Total = water_units* 30;
    }
    
    //Output
   
	printf("Total water bill : %.2f KES\n", Total);

	
	return 0;
}