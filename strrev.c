#include <stdio.h>
#include <string.h>

int main()
{
    printf("Kritish Karmacharya\n");

    char a[50];

    printf("Enter the string: ");
    scanf(" %[^\n]", a);  // Space before %[^\n] helps ignore leftover newline

    strrev(a);  // Converts string to lowercase

    printf("String after strrev: %s\n", a);

    return 0;
}
