#include <stdio.h>

int main()
{
    float originalPrice, discountedPrice;

    printf("Enter the price of the product: ");
    scanf("%f", &originalPrice);

    discountedPrice = originalPrice - (originalPrice * 0.25);

    printf("The price after 25%% discount is: %f\n", discountedPrice);

    return 0;
}