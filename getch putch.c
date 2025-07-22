#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Kritish Karmacharya\n");

    // wap to read and display character using getch(), getche() annd putch()
    char a, b;

    printf("Enter a first character:");
    a = getch();
    printf("You entered:");
    putch(a);
    printf("Enter a second character:");
    b = getche();
    printf("You entered:");
    putch(b);

    return 0;
}