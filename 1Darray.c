//
/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 6:Arrays
*/

#include <stdio.h>

void main() {
    int revenue[7]; // Array 
    int i,total = 0, average;

    printf("Hotel Weekly Revenue\n");

    // Input revenue for each day 
    for (i = 0; i < 7; i++) {
        printf("Enter Revenue for  day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        total += revenue[i];  
    }

    // Calculate average
    average = total / 7;

    // Display
	printf("\n \n \n"); 
    printf("Total Weekly Revenue: %d\n", total);
    printf("Average Daily Revenue: %d\n", average);
}
