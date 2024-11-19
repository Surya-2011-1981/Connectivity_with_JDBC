#include <stdio.h>

int main()
{
    float originalPrice, discountPercentage, discountedPrice;

    printf("Enter the price of the product: ");
    scanf("%f", &originalPrice);

    printf("Enter the discount percentage: ");
    scanf("%f", &discountPercentage);

    discountedPrice = originalPrice - (originalPrice * (discountPercentage / 100));

    printf("The price after %f%% discount is: %f\n", discountPercentage, discountedPrice);

    return 0;
}