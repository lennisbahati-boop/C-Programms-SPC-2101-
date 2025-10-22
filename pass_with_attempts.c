/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 4
*/
#include <stdio.h>

int main() {
    int password;
    int tries = 0;
    int maxtries = 5;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
        tries++;

        if (password != 1234) {
            if (tries < maxtries) {
                printf("Incorrect password. Try again. (%d attempts left)\n", maxtries - tries);
            } else {
                printf("Too many failed attempts! Access Denied.\n");
            }
        }

    } while (password != 1234 && tries < maxtries);

    if (password == 1234) {
        printf("Access Granted.\n");
    }

    return 0;
}
