/**
 * Find the average of rolled numbers
 **/

#include <stdio.h>

int main(void){
    int n, red, yellow, green;
    double avg, rolled, sum;

    scanf("%d", &n);
    for(int i = 1;i <= n; i++){
        scanf("%d %d %d", &red, &yellow, &green);
        rolled = (green * 100) + (yellow * 10) + red;
        sum += rolled;
        avg = sum / i;
        printf("%d. you rolled: %d, current average: %.1lf\n", i, (int)rolled, avg);
    }
    return 0;
}