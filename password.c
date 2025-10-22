/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 4
*/
#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }

    } while (password != 1234);

    printf("Access Granted.\n");

    return 0;
}