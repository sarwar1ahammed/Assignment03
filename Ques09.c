#include <stdio.h>
int main()
{
    /*  Find the greatest among three given numbers. 
        Print number once if the greatest number appears two or three times.
    */

    int num1, num2, num3;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("Greater number is : %d", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("Greater number is : %d", num2);
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        printf("Greater number is : %d", num3);
    }
    

    return 0;
}