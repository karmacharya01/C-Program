#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");
    
    // Wap using implicit tpe conveersion and explict type conversion
    int a;
    float b;

    printf("Enter the value for a:\n");
    scanf("%d", &a);
    printf("Enter the value for b:\n");
    scanf("%d", &b);

    // implict type conversion
    printf("Sum of implict conversion is %f\n", a + b); // it is automatically donr by compiler

    // Explict type conversion
    printf("Sum of explict conversion is %d\n", a + (int)b); // it is need to done manually

    return 0;
}