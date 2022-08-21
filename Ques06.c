#include <stdio.h>
int main()
{
    // greater between two numbers. Print one number of both are the same.

    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
    {
        printf("Both number are same : %d", num1);
    }
    else if (num1 > num2)
    {
        printf("Greater between two numbers : %d", num1);
    }
    else 
    {
        printf("Greater between two numbers : %d", num2);
    }

    return 0;
}