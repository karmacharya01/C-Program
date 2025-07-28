#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");
    // Wap using relational operator
    int a, b;

    printf("Enter the value for a:");
    scanf("%d", &a);
    printf("Enter the value for b:");
    scanf("%d", &b);

    printf("\nRelational Operator Results:\n");

    printf("a == b : %s\n", (a == b) ? "true" : "false"); // Equal to
    printf("a != b : %s\n", (a != b) ? "true" : "false"); // Not equal to
    printf("a > b  : %s\n", (a > b) ? "true" : "false");  // Greater than
    printf("a < b  : %s\n", (a < b) ? "true" : "false");  // Less than
    printf("a >= b : %s\n", (a >= b) ? "true" : "false"); // Greater than or equal to
    printf("a <= b : %s\n", (a <= b) ? "true" : "false"); // Less than or equal to

    return 0;
}