#include <stdio.h>
int main()
{
    // whether a given number is divisible by 3 and divisible by 2.

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 2 == 0)
    {
        printf("Given number is divisible by 3 and divisible by 2.");
    }
    else 
    {
        printf("Given number is not divisible by 3 and divisible by 2.");
    }

    return 0;
}