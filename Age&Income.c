//Age and income

/*
Name : Lennis Bahati
Reg No: PA106/G/28806/25
Description:Age and Loan code
*/
 #include <stdio.h>

int main() {
    int age;
    float income;

    //  user input
    printf("Enter your age:\n ");
    scanf("%d", &age);

    printf("Enter your  income \n: ");
    scanf("%f", &income);

    //  conditions
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
