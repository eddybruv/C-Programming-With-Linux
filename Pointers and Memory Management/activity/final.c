#include <stdio.h>

int ** allocateIntStarArray(int num);
int * allocateIntArray(int num);

int main(void){
    //int ** arr;
    int row, col;
    char x = '\0';
    scanf("%d %d", &col, &row);
    //*arr = allocateIntArray(row);
    //arr = allocateIntStarArray(rows);
    int arr[row][col];

    for(int i = 0; i < row;i++)
        for(int j = 0; j < col;j++)
            scanf("%d", &arr[i][j]);
        
    printf("Rows: %d, col: %d\n", row, col);
    for(int i = 0; i < row;i++)
    {
        for(int j = 0; j < col;j++)
        {
            if(arr[i][j] > 100)
                x = '*';
            if(arr[i][j] > 999)
                x = 'X';
            if (arr[i][j] < 100)
                x = ' ';
            printf("[%c]", x);
        }
        printf("\n");
    }
    return 0;
}