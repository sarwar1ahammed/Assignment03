#include <stdio.h>
int main()
{
    // check whether a given number is an even number or an odd number without using % operator.

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // if (num / 2 == 0)
    // {
    //     printf("Given number is an even number.");
    // }
    // else 
    // {
    //     printf("Given number is an odd number.");
    // }
     if (num & 1 == 1)
    {
        printf("Given number is an Odd number.");
    }
    else 
    {
        printf("Given number is an Even number.");
    }

    

    return 0;

}