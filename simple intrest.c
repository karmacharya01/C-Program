#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // wap to find simple intrest
    float principal, rate, time, simpleinterest;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (%% per annum): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleinterest = (principal * rate * time) / 100;
    
    // Display result
    printf("Simple Interest = %.2f\n", simpleinterest);

    return 0;
}