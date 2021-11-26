#include <stdio.h>
#include <string.h>

int isReverse(char *, char *);

int main(void){
    char word1[99], word2[99];
    scanf("%s %s", word1, word2);
    
    if(isReverse(word1, word2))
        printf("%s is the reverse of %s", word1, word2);
    else
        printf("%s is not the reverse of %s", word1, word2);
    return 0;
}

int isReverse(char *word1, char *word2){
    int len = strlen(word2);

    for(int i = 0; i < len;i++){
        if(word1[i] != word2[len - i - 1])
            return 0;
    }
    return 1;
}