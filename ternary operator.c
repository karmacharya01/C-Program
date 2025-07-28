#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // Wap using condictional (ternary) operator
    int a, b;

    printf("Enter the value for a:");
    scanf("%d", &a);
    printf("Enter the value for b:");
    scanf("%d", &b);

     printf("%s\n",(a>b)?"a is the greatest" : "b is greatest");

    return 0;
}