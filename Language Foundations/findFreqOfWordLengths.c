#include <stdio.h>

int main(void) {
    int i = 0, t = 0, l = 0, j = 0, nbWords = 0;
    char word[11];
    int length[10];//length[5] number of 5-letter-long words in the text
    
    for(i = 0; i < 10;i++){
        length[i] = 0;
    }
    
    scanf("%d", &nbWords);
    
    for(t = 0; t < nbWords; t++){
        scanf("%s", word);
        l = 0;

        while(word[l]!='\0'){
            l++;
        }

        length[l] = length[l] + 1;
        printf("%s %d ", word,l);
    }

    for(j = 0;j < 10; j++){
        printf("\nThere are %d words with %d letters.\n", length[j], j);
    }
    return 0;   
}