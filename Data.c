//Mobile Data Bundle Purchase
/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :Mobile Data Bundle Purchase
Date:Week 3
*/

#include <stdio.h>

int main() {
    int choice;

    //  Display menu
    printf("Mobile Data Bundles:\n");
    printf("1. 100 MB @ 50 KES\n");
    printf("2. 500 MB @ 200 KES\n");
    printf("3. 1 GB   @ 350 KES\n");
    printf("4. 2 GB   @ 600 KES\n");

    // user choice
    printf("Enter your choice (1-4): \n");
    scanf("%d", &choice);

    //  Switch statement
    switch (choice) 
	{
        case 1:
            printf("You selected 100 MB. Cost: 50 KES\n");
            break;//to avoid testing the rest of the conditions
        case 2:
            printf("You selected 500 MB. Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected 1 GB. Cost: 350 KES\n");
            break;
        case 4:
            printf("You selected 2 GB. Cost: 600 KES\n");
            break;
        default://if no incorrect choice is made
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}