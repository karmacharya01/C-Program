#include <stdio.h>

int main()
{
    printf("Kritish Karmachaya\n");

    // Wap using special operator
    int a = 0, s, b = 10, result;

    result = (a = a + 2, b = b + 2, a + b);

    printf("Result of comma expression: %d\n", result);

    printf("New value of a = %d, b = %d\n", a, b);

    printf("Size of int: %lu bytes\n", sizeof(int));

    printf("Size of variable 'a': %lu bytes\n", sizeof(a));

    return 0;
}