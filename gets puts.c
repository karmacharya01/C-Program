#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // Wap to read and display string using gets and puts
    char name[25];
    printf("Enter your name:");
    gets(name);

    printf("Your name is %s");
    puts(name);

    return 0;
}