/**
 * @p:
 * You are teaching a class on C-programming! You would like to find out whether your teaching has been effective, and so you need to compute the average grade your students have received on the most recent assignment. 
 * These grades (integers) are stored in the file studentGrades.txt.
 * The first entry in the file (an integer) is the number of student grades that are stored in the file. For example, if the file was as follows:
 * 
 * 
 * 9
 * 56 3 8 11 0 45 55 2 78
 * 
 * this would mean that there are 9 grades stored in the file (starting with 56 and ending with 78).
 * Your job is to calculate and print out the average of the grades stored in the file. Please print the average grade with two decimal places.
 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int num, N, sum = 0;
    double avg = 0;

    fp = fopen("studentGrades.txt", "r");

    fscanf(fp, "%d", &N);

    for (int i = 0; i < N; i++)
    {
        fscanf(fp, "%d", &num);
        sum += num;
    }
    avg = (double)(sum / N);
    printf("%.2lf\n", avg);

    return 0;
}