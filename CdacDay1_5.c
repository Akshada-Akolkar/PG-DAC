#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) / 1.8;

    // Display the result
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}

/*
int main()
{
    float fahrenheit,celsius;
    printf("enter the temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32)/1.8;
    printf("%.2f fahrenheitis equal to %.2f celsius.\n ",fahrenheit,celsius);
    return 0;
}
*/