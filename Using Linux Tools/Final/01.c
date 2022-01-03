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
void computeRadii(struct star *mystars, int size);
void classifyStars(struct star *mystars, int size);

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
int readStars(struct star *mystars)
{
    FILE *fp;
    char ch;
    int i;
    char filename[] = "stardata.txt";

    fp = fopen(filename, "r");

    for (i = 0; (ch = getc(fp)) != EOF; i++)
    {
        fscanf(fp, "%s", mystars[i].name);

        fscanf(fp, "%d", &mystars[i].temperature);
        fscanf(fp, "%lf", &mystars[i].luminosity);

        if (ch == ' ')
            continue;
    }
    return (i);
}

void computeRadii(struct star *mystars, int size)
{
    int Ts = 3500;
    for (int i = 0; i < size; i++)
    {
        mystars[i].radius = pow(((double)Ts / (double)mystars[i].temperature), 2.0) * sqrt(mystars[i].luminosity);
    }
}

void classifyStars(struct star *mystars, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (mystars[i].radius > 0.1 && mystars[i].radius < 10.0)
        {
            mystars[i].classification = 'M';
        }

        else if (mystars[i].radius > 10.0 && mystars[i].radius < 100.0)
        {
            mystars[i].classification = 'G';
        }

        else if (mystars[i].radius > 100.0)
        {
            mystars[i].classification = 'S';
        }

        else if (mystars[i].radius < 0.01)
        {
            mystars[i].classification = 'W';
        }

        else
            mystars[i].classification = 'N';
    }
}