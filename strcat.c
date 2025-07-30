#include <stdio.h>
#include <string.h>
int main()
{
    printf("Kritish Karmacharya\n");

    char a[20] = "I love ";
    char b[20] = "my babygirl";
    char c[50];

    printf("%s", strcat(a, b));

    return 0;
}