#include <stdio.h>
#include <string.h>
int main()
{
    printf("Kritish Karmacharya\n");

    char str[25];
    int length;

    printf("Enter the string:");
    scanf("%[^\n]", str); // takes a string input having whitespace

    length = strlen(str);

    printf("The length of the string is %d", length);

    return 0;
}