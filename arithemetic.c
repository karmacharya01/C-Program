#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n"); 

    // wap using the arithemetiical operator
    int a, b, sum, sub, mul;
    float div;

    // Input numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

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