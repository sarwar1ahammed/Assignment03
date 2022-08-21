#include <stdio.h>
int main()
{
    // whether a given number is divisible by 7 or divisible by 3.

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 3 == 0)
    {
        printf("Given number is divisible by 7 or divisible by 3.");
    }
    else 
    {
        printf("Given number is not divisible by 7 or divisible by 3.");
    }

    return 0;
}