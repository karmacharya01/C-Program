#include <stdio.h>
#include <string.h>

int main()
{
    printf("Kritish Karmacharya\n");

    char a[50];
    char b[50];

    printf("Enter the first string: ");
    scanf("%[^\n]", a);
    getchar(); // consume leftover newline

    printf("Enter the second string: ");
    scanf("%[^\n]", b);

    if (strcmp(a, b) == 0)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}
