#include <stdio.h>
int main()
{
    // whether a given number is positive, negative or zero.

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Given number is Postive.");
    }
    else if (num < 0)
    {
        printf("Given number is Negetive.");
    }
    else if (num == 0)
    {
        printf("Given number is Zero.");
    }

    return 0;
}