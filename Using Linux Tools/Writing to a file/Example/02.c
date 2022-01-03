#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;

    char filename[] = "file.txt";
    int num, selection;
    selection = 1;

    //check whether the file already exist
    fp = fopen(filename, "r");

    if(fp != NULL){
        printf("You already have a file named %s", filename);
        printf("Do you wish to (1) append of (2) overwrite? Enter 1 or 2: ");
        scanf("%d", selection);
    }

    if(selection == 1){
        fp = fopen(filename, "a");
    } else {
        fp = fopen(filename, "w");
    }
 
    do
    {
        printf("Please enter a grade. Enter -1 to quit: \n");
        scanf("%d", &num);
        if (num != -1)
            fprintf(fp, "%d ", num);
    } while (num != -1);
    fclose(fp);

    return 0;
}