/**
 * Divide decimals with round-off
 **/

#include <stdio.h>

int main(void){
    int n, price;
    double amountNeeded;
    scanf("%lf", &amountNeeded);

    if((int)amountNeeded % 120 == 0)
        n = amountNeeded / 120;
    else    
        n = (amountNeeded / 120) + 1;
    
    price = n * 45;
    printf("%d", price);
}
