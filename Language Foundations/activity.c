//find longest string length

#include <stdio.h>

int main(void){
    int n, max = 0, min = 0;
    char word[100];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n;i++){
        scanf("%s", word);
        min = 0;
        
        while(word[min] != '\0')
            min++;
            
        if(min > max)
            max = min;
    }
    
    printf("%d", max);
    return 0;
}