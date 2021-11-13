/**
 * sum up digits in a number using recursion.
 **/

#include <stdio.h>

int sumofdigits(int);

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", sumofdigits(n));
}


int sumofdigits(int n){
    if(n > 10)
        return (n%10) + sumofdigits(n / 10);
    else
        return n;
    
}