#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // Wap using all data types
    int a;
    float b;
    char c[100];
    unsigned int d;
    short int e;
    long int f;
    double g;
    long double h;

    // taking inputs for all data types
    printf("Enter the value for int: ");
    scanf("%d", &a);
    printf("Enter the value for float: ");
    scanf("%f", &b);
    printf("Enter the value for string (char array): ");
    scanf("%s", c);
    printf("Enter the value for unsigned int: ");
    scanf("%u", &d);
    printf("Enter the value for short int: ");
    scanf("%hd", &e);
    printf("Enter the value for long int: ");
    scanf("%ld", &f);
    printf("Enter the value for double: ");
    scanf("%lf", &g);
    printf("Enter the value for long double: ");
    scanf("%Lf", &h);
    
    // Displaying all values
    printf("\nYou entered:\n");
    printf("int: %d\n", a);
    printf("float: %.2f\n", b);     
    printf("string: %s\n", c);
    printf("unsigned int: %u\n", d);
    printf("short int: %hd\n", e);
    printf("long int: %ld\n", f);
    printf("double: %.2lf\n", g);
    printf("long double: %.2Lf\n", h);

    return 0;
}