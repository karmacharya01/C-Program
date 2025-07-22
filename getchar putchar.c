#include <stdio.h>
int main()
{
    printf("Kritish Karmacharya\n");
    
    // wap using getchar and putchar function
    char ch;
    
    printf("Enter a character: ");
    ch = getchar(); // Read a character
    printf("You entered: ");
    putchar(ch); // Display the character

    return 0;
}