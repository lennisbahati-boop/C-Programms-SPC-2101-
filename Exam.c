//Exam eligibility
/*
Name :Lennis Bahati
Reg no:PA106/G/28806/25
Description:Exam Eligibility
Date:Week 3
*/

#include<stdio.h>

int main()
{
	//User input
	char name[50];
	int Attendance,Average_marks;
	
	printf("Enter your Name:\n");
	fgets(name, sizeof(name), stdin); 
	
	
	
	
	
	
	printf("Enter your Average marks:\n");
	scanf("%d",&Average_marks);
	
	printf("Enter Attendace Percentage\n:");
	scanf("%d",&Attendance);
	
	//Conditions
	if(Average_marks >=40 && Attendance >=75)
	{
	   printf("Eligible\n");
	}
	else
	{
		printf("Not eligible\n");
	}
	
	//Print output
	printf("Name:%s\n",name);
	printf("Average marks:%d\n",Average_marks);
	printf("Attendance Percentage:%d\n",Attendance);
	

	return 0;
}