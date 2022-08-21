#include <stdio.h>
int main()
{
    /*  takes the length of the sides of a triangle as an input. Display
        whether the triangle is valid or not.
    */

    int a, b, c;
    printf("Enter three length of a tringle (a = len1 b = len2 c = len3): ");
    scanf("a = %d b = %d c = %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Valid Triangle");
    }    
   else 
   {
        printf("Invalid Triangle");
   }

    
    return 0;
}