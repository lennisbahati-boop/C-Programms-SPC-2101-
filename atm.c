//atm withdrawals
/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :atm withdrawals
Date:Week 4
*/
#include <stdio.h>

int main() {
    float balance, withdraw;

    //  enter the original balance
    printf("Enter your account balance: ");
    scanf("%f", &balance);
    
    while (balance > 0) {
        printf("Enter amount to withdraw\n: ");
        scanf("%f", &withdraw);

        balance -= withdraw;  // Subtract

        printf("Remaining balance: %.2f\n", balance);

       
    }

    return 0;
}

