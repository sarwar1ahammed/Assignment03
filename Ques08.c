#include <stdio.h>
int main()
{
    // check whether a given year is a leap year or not.

    int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Given year is a leap year.");
    }
    else 
    {
        printf("Given year is not a leap year.");
    }

    return 0;
}