#include <stdio.h>
// add additional header files here
#include <math.h>

struct star
{
    char name[50];
    int temperature;
    double luminosity;
    double radius;
    char classification;
};

void printStars(struct star mystars[], int N);
// add your propotypes here
int readStars(struct star *mystars);
void computeRadii(struct star *mystar, int size);
void classifyStars(struct star *mystar, int size);

// Do not modify the main() function!
int main(void)
{
    struct star mystars[50];
    int N;

    N = readStars(mystars);
    computeRadii(mystars, N);
    classifyStars(mystars, N);
    printStars(mystars, N);

    return 0;
}

// Do not modify the printStars() function!
void printStars(struct star mystars[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%s is a ", mystars[i].name);
        if (mystars[i].classification == 'M')
        {
            printf("Main Sequence Star\n");
        }
        else if (mystars[i].classification == 'G')
        {
            printf("Giant\n");
        }
        else if (mystars[i].classification == 'S')
        {
            printf("Supergiant\n");
        }
        else if (mystars[i].classification == 'W')
        {
            printf("White Dwarf\n");
        }
        else if (mystars[i].classification == 'N')
        {
            printf("Unclassified Star\n");
        }
        else
        {
            printf(" !!! Warning: '%c' not a valid classification code!!!\n", mystars[i].classification);
        }
        printf("Temp = %d Kelvin, Lum = %.4lf Sol, Rad = %.2lf * R_Sun\n\n", mystars[i].temperature, mystars[i].luminosity, mystars[i].radius);
    }
}

// add the functions readStars(), computeRadii() and classifyStars() here.
int readStars(struct star *mystars){
    FILE *fp;
    char ch;
    int i;
    char filename[] = "stardata.txt";
    
    fp = fopen(filename, "r");

    for(i = 0; (ch = getc(fp)) == EOF; i++){
        fscanf(fp, "%s", mystars[i].name);
        fscanf(fp, "%d", &mystars[i].temperature);
        fscanf(fp, "%lf", &mystars[i].luminosity);

        if(ch == ' ')
            continue;
    }

    return (i+1);
}

void computeRadii(struct star *mystar, int size){
    double raduis;
    int Ts = 3500;

    for(int i = 0; i < size; i++){
        mystar[i].radius = pow((Ts/mystar[i].temperature), 2) * sqrt(mystar[i].luminosity);         
    }
}

void classifyStars(struct star *mystar, int size){
    for (int i = 0; i < size; i++){
        if (mystar[i].radius > 0.1 && mystar[i].radius < 10){
            mystar[i].classification = 'M';
        }

        else if (mystar[i].radius > 10 && mystar[i].radius < 100){
            mystar[i].classification = 'G';
        }

        else if (mystar[i].radius > 100){
            mystar[i].classification = 'S';
        }

        else if (mystar[i].radius < 0.01){
            mystar[i].classification = 'W';
        }

        else 
            mystar[i].classification = 'N';
    }
}