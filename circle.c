#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // wap to find area and circumference of circle
    float radius, area, circumference;
    float PI = 3.1415;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    // Display results
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}