#include <stdio.h>
#include <math.h>
 
int main()
{
    float originalPrice, discountPercentage, numOfShirts;
    scanf("%f", &originalPrice); 
    scanf("%f", &discountPercentage); 
    scanf("%f", &numOfShirts); 
 
    float discount = (originalPrice - (originalPrice * (discountPercentage / 100))) * numOfShirts;
    float total_buy = (ceil(numOfShirts * 2 / 3)) * originalPrice;
 
    if (total_buy < discount) {
        printf("Buy 2 Get 1\n");
        printf("%.2f", total_buy);
    } else {
        printf("Discount %.0f%%\n", discountPercentage);
        printf("%.2f", discount);
    }
}