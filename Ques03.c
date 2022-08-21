#include <stdio.h>
int main()
{
    // check whether a given number is an even number or an odd number.

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Given number is an even number.");
    }
    else 
    {
        printf("Given number is an odd number.");
    }

    return 0;

}