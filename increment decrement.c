#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // wap using increment and decrement
    int a;

    printf("Enter a number:");
    scanf("%d", &a);

    printf("Original value of a: %d\n", a);

    // Post-increment
    printf("Post-increment (a++): %d\n", a++);
    printf("Value after post-increment: %d\n", a);

    // Pre-increment
    printf("Pre-increment (++a): %d\n", ++a);

    // Post-decrement
    printf("Post-decrement (a--): %d\n", a--);
    printf("Value after post-decrement: %d\n", a);

    // Pre-decrement
    printf("Pre-decrement (--a): %d\n", --a);
    
    return 0;
}