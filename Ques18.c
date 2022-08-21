#include <stdio.h>
int main()
{
    /*  which takes the month number as an input 
        and display number of days in that month
    */

   int MMnum;
   printf("Enter the Month number (1-12) : ");
   scanf("%d", &MMnum);

   if (MMnum == 1)
   {
        printf("01 month (January) has 31 Days");
   }
    else if (MMnum == 2)
   {
        printf("02 month (February) has 28 Days" );
   }
    else if (MMnum == 3)
    {
        printf("03 month (March) has 31 Days");
   }
    else if  (MMnum == 4)
   {
        printf("04 month (April) has 30 Days");
   }
   else if (MMnum == 5)
   {
        printf("05 month (May) has 31 Days");
   }
   else if (MMnum == 6)
   {
        printf("06 month (June) has 30 Days");
   }
   else if (MMnum == 7)
   {
        printf("07 month (July) has 31 Days");
   }
   else if (MMnum == 8)
   {
        printf("08 month (August) has 31 Days");
   }
   else if (MMnum == 9)
   {
        printf("09 month (September) has 30 Days");
   }
   else if (MMnum == 10)
   {
        printf("10 month (October) has 31 Days");
   }
   else if (MMnum == 11)
   {
        printf("11 month (November) has 30 Days");
   }
    else if (MMnum == 12)
   {
        printf("12 month (December) has 31 Days");
   }
   else 
   {
        printf("You've enter a wrong digit.");
   }




    return 0;
}