#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // Wap using assignment operators
    int a, b;

    printf("Enter the value for a:");
    scanf("%d", &a);
    printf("Enter the value for b:");
    scanf("%d", &b);

    printf("The value before calculation are:\n a = %d, b = %d\n", a, b);

    a += b; // a = a + b
    printf("a += b : %d\n", a);

    a -= b; // a = a - b
    printf("a -= b : %d\n", a);

    a *= b; // a = a * b
    printf("a *= b : %d\n", a);

    a /= b; // a = a / b
    printf("a /= b : %d\n", a);

    a %= b; // a = a % b
    printf("a %%= b : %d\n", a);

    return 0;
}