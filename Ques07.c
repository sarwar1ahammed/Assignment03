#include <stdio.h>
#include <math.h>
int main()
{
    /*  Write a program to check whether roots of a given quadratic equation are real &
        distinct, real & equal or imaginary roots
    */

   float discriminant, a, b, c, root1, root2, real, img;
   printf("Enter the Coefficient of the quadratic equation x, y, z : ");
   scanf("%f %f %f", &a, &b, &c);

    discriminant = (b*b) - (4*a*c) ;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Value of Root1 = %.2f and \nValue of Root2 = %.2f\n", root1, root2); 
        printf("The roots are real and distinct.");

    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);
        printf("Value of Root1 = %.2f and \nValue of Root2 = %.2f\n", root1, root2); 
        printf("Both the roots are real and equal");

    }
    else if (discriminant < 0)
    {
        real = -b / (2 * a) ;
        img = sqrt(-discriminant) / (2 * a);  
        printf("Value of Root1 = %.2f + %.2fi and \nValue of Root2 = %.2f - %.2fi\n", real, img, real, img);  
        printf("Both the roots are real and imaginary");
        

    }


   return 0;

}