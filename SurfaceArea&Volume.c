/*
Name : Lennis Bahati
Reg No: PA106/G/28806/25
Description:volume of a cylinder
*/
#include<stdio.h>

int main()
{
	float radius ,height,Volume, SurfaceArea;
	float pi=3.142;
	
	printf("Enter radius:\n");
	scanf("%f",&radius);
	
	printf("Enter height:\n");
	scanf("%f",&height);
	
	//Volume
	Volume=pi*radius*radius*height;
	printf("Volume is %.2fcm cubic\n ",Volume );
	
	//SurfaceArea
	SurfaceArea=2*pi*radius*radius+2*pi*radius*height;
	printf("SurfaceArea is %.2fcm squared\n");
	
	
	return 0;
	

}