/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 5
*/
#include <stdio.h>

// Function prototype
float convertToCelsius(float fahrenheit);

//Function Defination
float convertToCelsius(float fahrenheit) {
	float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

//Main Function
void main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius = %.2f°C\n", celsius);

   
}
