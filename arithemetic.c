#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n"); 

    // wap using the arithemetiical operator
    float a, b, sum, sub, mul, div;

    // Input numbers
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    // Perform operations
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    
    // printng output
    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", sub);
    printf("Multiplication: %.2f\n", mul);
    printf("division: %.2f\n", div);

    return 0;
}