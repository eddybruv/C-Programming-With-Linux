#include <stdio.h>

int main(void){
    FILE *fp;
    char filename[] = "file.txt";
    int num;

    fp = fopen(filename, "w");

    do {
        printf("Please enter a grade. Enter -1 to quit: ");
        scanf("%d", &num);
        
        if(num != -1)
            fprintf(fp, "%d ", num);
    } while (num != -1);
    
    fclose(fp);
    return 0;
}