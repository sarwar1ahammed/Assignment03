#include <stdio.h>
int main()
{
    //check whether a given number is divisible by 5 or not.

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("Given number is divisible by 5");
    }
    else 
    {
        printf("Given number is not divisible by 5");
    }

    return 0;
    
}