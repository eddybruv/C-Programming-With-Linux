/**
 * @brief: Print a text in reverse order.
 * 
 * Problem Statement: 
 * Your goal is to read a 68-word text from the input and then print it to the screen backwards. 
 * Individual words do not have to be spelled backwards, but rather your program should print out the last word first, 
 * then the second-to-last word, etc. No word has more than 40 characters.
 * 
 * Text: 
 * Science Computer on Papers Selected Knuth, Ervin Donald ― correct." 
 * be will results the that reader a convince to and works algorithm an way the communicate to concepts, 
 * mathematical as well as forms literary and aesthetic traditional with works who essayist an ideally is programmer A clearly. 
 * them understand can beings human that so and quickly them perform can machines computing that so written are programs best "The
 * 
 * Output: 
 * "The best programs are written so that computing machines can perform them quickly and so that human beings can understand them clearly.
 * A programmer is ideally an essayist who works with traditional aesthetic and literary forms as well as mathematical concepts, 
 * to communicate the way an algorithm works and to convince a reader that the results will be correct." 
 * ― Donald Ervin Knuth, Selected Papers on Computer Science
 **/

#include <stdio.h>

int main(void){
    char sentence[68][40];
    
    for(int i = 0;i < 68; i++){
        scanf("%s", sentence[i]);
    }
    
    for(int i = 67; i >= 0;i--){
        printf("%s ", sentence[i]);
    }
    return 0;
}