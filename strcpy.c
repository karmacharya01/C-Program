#include <stdio.h>
#include <string.h>
int main()
{
    printf("Kritish Karmacharya\n");

    char a[50];
    char b[] = "C-programming is intresting programming language.";

    printf("Original string: %s\n" , b);

    strcpy(a ,b);  // copies the original string

    printf("Copied string: %s ", a );

    return 0;
}