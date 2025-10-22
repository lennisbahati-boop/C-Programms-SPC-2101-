/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 5
*/
#include<stdio.h>

//Function prototype
float calculateFare(float km);

//Function Defination
float calculateFare(float km){
	float Total;
	Total=50*km;//50 per km
	return Total;
}

//Main Function
void main(){
	
	float km,Total;
	int rate=50;
	
	printf("Enter the Distance in km:\n");
	scanf("%f",&km);
	
	Total=calculateFare(km);
	
	printf("You're  Total fare is %.2f\n",Total);
	
}