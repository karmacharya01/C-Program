#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // wap to find area of triangle
    float base, height, area;

    // Input base and height
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    // Calculate area
    area = 0.5 * base * height;

    // Display result
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}


