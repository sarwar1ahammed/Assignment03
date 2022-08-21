#include <stdio.h>
int main()
{
    // calculate and print profit or loss percentage.

    float costPrice, sellingPrice;
    printf("Enter cost price & selling price : ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice)
    {
        printf("You've profit : %.2f%%", (sellingPrice - costPrice) * 100 / costPrice);
    }
    else if (costPrice > sellingPrice)
    {
        printf("You've loss : %.2f%%", (costPrice - sellingPrice) * 100 / costPrice);
    }
    else if (costPrice == sellingPrice)
    {
        printf("You've not profit or loss in this product");
    }

    return 0;
}