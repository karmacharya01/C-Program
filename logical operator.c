#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");
    
    // wap using logical operators
    int a, b, c;

    printf("Enter the value for a:\n");
    scanf("%d", &a);
    printf("Enter the value for b:\n");
    scanf("%d", &b);
    printf("Enter the value for c:\n");
    scanf("%d", &c);

    // logical AND operation
    printf("%s\n", (a >= b && a >= c) ? "a is greatest\n" : (b > c) ? "b is greatest\n": "c is greatest\n");
    
    // logical OR operation
    printf("%s\n", (a > 100 || b > 100 || c > 100) ? "One number is greater than hundred\n" : "None are greater than hundred\n");
    
    // logical NOt operation
    printf("%s\n", (!(a == 0 || b == 0 || c == 0)) ? "None of the numbers is zero.\n" : "At least one number is zero.\n");

    return 0;
}