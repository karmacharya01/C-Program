#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");
    
    // Wap using Bitwise operators
    int a, b;

    printf("Enter the value for a:");
    scanf("%d", &a);
    printf("Enter the value for b:");
    scanf("%d", &b);

    printf("\nBitwise Operator Results:\n");
    printf("a & b  = %s\n", (a & b) ? "true" : "false");  // Bitwise AND
    printf("a | b  = %s\n", (a | b) ? "true" : "false");  // Bitwise OR
    printf("a ^ b  = %s\n", (a ^ b) ? "true" : "false");  // Bitwise XOR
    printf("~a     = %s\n", (~a) ? "true" : "false");     // Bitwise NOT
    printf("a << 1 = %s\n", (a << 1) ? "true" : "false"); // Left shift
    printf("a >> 1 = %s\n", (a >> 1) ? "true" : "false"); // Right shift

    return 0;
}