/**
 * @p:
 * You are still teaching a class on C-programming! 
 * You would like to find out whether the students in your class did better on the most recent assignment than the students in your colleagues' classes. 
 * The average grades of all these classes are stored in a file called "gradeComparison.txt". 
 * The first number stored in the file represents the average grade of the students in your class. 
 * All of the subsequent numbers represent the average grades of students from other sections. 
 * For example, if the file contained the following:
 * 
 * 95.23 94.80 91.56
 * 
 * this would mean that the students in your class received an average grade of 95.23 on the last assignment, 
 * which is higher than the average grades received by students in the other sections.
 * 
 * If, on the other hand, the file was
 * 
 * 95.23 94.80 91.56 96.40 93.25
 * 
 * then this would mean that the students in the fourth class received a slightly higher grade than the students in your class.  
 * 
 * Your job is to find out whether the students in your class did better than the students in the other classes and if so, 
 * print out the word "Yes". If on the other hand students in another class did better than your students then you should print out "No", 
 * followed by one space, followed by the number of the first class in the file that had a better grade average.
 */

#include <stdio.h>

int main(void){
    FILE *fp;
    int i = 0, place = 0;
    double avg, max_num = 0.0;

    fp = fopen("gradeComparison.txt", "r");

    while(fscanf(fp, "%lf", &avg) != EOF){
        if(avg > max_num){
            max_num = avg;
            place = i;
        }
        i++;
    }
    
    fclose(fp);

    if(place == 0){
        printf("Yes\n");
        return 0;
    }

    printf("No %d\n", place);
    return 0;

}