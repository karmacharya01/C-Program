#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // wap using the arithemetiical operator
    int a, b, c, sum, sub, mul, mod;
    float div;

    // Input numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    // Perform operations
    sum = a + b + c;
    sub = a - b - c;
    mul = a * b * c;
    div = a / b / c;
    mod = a % b % c;

    // printng output
    printf("The Addition of %d + %d + %d is %d\n", a, b, c, sum);
    printf("The Subtraction of %d - %d - %d is %d\n", a, b, c, sub);
    printf("The Multiplication of %d * %d * %d is %d\n", a, b, c, mul);
    printf("The Division of %d / %d / %d is %.2f\n", a, b, c, div);
    printf("The modular division of %d %% %d %% %d is %d\n", a, b, c, mod);

    return 0;
}