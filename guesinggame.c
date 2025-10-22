//
/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 4
*/
#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
 int main(){
  int Guess, secretnumber, trial=0;
  
  //Random number generator
   srand(time(0));
   secretnumber=(rand()%20)+1; //Generates numbers between 1 and 20
   
   printf("Guess a number between 1 and 20:\n");
   
   while(1){
	   printf("Enter your Guess:\n");
	   scanf("%d",&Guess);
	   trial++;
	    
       if (Guess > secretnumber){
		   printf("Too high!\n");
	   }else if (Guess < secretnumber){
		   printf("Too low!\n");
	   }else {
		   printf("Congratulations!\n");
		   printf("Total attempts: %d\n", trial);
		   break;
	   }
   }
       return 0;
 }