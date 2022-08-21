#include <stdio.h>
int main()
{   
    /* 
        Whether the candidate passed the examination or failed.
        Assume marks are given out of 100 and passing marks is 33.
    */
    int ben, eng, math, his, geo;
    printf("Enter Bengali marks in range (100): ");
    scanf("%d", &ben);
    printf("Enter English marks in range (100): ");
    scanf("%d", &eng);
    printf("Enter Mathematics marks in range (100): ");
    scanf("%d", &math);
    printf("Enter History marks in range (100): ");
    scanf("%d", &his);
    printf("Enter Geography marks in range (100): ");
    scanf("%d", &geo);

    if (ben >= 33 && eng >= 33 && math >= 33 && his >= 33 && geo >= 33)
    {
        printf("You've passed the examination");
    }
    else 
    {
        printf("You've failed the examination");
    }



    return 0;
}