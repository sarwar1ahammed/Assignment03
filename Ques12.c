#include <stdio.h>
int main()
{
    // a given alphabet is in uppercase or lowercase.

    char ch;
    printf("Enter an alphabet like (A to Z) or (a to z) : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Alphabet is in Upper Case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Alphaber is in lower Case");
    }
    else 
    {
        printf("Plz, recheck your Alphabet");
    }



    return 0;
}