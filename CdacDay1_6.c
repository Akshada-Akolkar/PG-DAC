#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Input principal amount, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
/*
int main()
{
    float principle,rate,time,simple_interest;
    printf("enter principle amount:")
    scanf("%f",&principle);
    printf("enter rate of intrest(in percentage):");
    scanf("%f",&time);
    simple_intrest=(principle *rate*time)/100;
    printf("simple interest=%.2f\n",simple intrest);
    return 0;
}
*/
