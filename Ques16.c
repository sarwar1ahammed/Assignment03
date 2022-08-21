#include <stdio.h>
int main()
{
    /*
        a given character is an alphabet (uppercase), an
        alphabet (lower case), a digit or a special character.
    */

    char ch;
    printf("Enter an alphabet like (A to Z) or (a to z) or (0 to 9) or a special character : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Given character is an alphabet (Upper Case)");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Given character is an alphabet (Lower Case)");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Given character is a Digit");
    }
    else 
    {
        printf("Given character is a Special Character");
    }


    return 0;
}