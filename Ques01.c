#include <stdio.h>
int main()
{
    // check whether a given number is positive or non-positive.

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Given number is Postive.");
    }
    if (num <= 0)
    {
        printf("Given number is Non-Postive.");
    }

    return 0;


}