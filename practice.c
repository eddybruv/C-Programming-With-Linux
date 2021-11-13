#include <stdio.h>
int funnyadd(int j, int i);

int main(void)
{
      int i = 5; 
      int j = 7;
      i = funnyadd(i,j);
      printf("%d", i);
      return(0);
}

int funnyadd(int j, int i)
{
      int a = 2;
      return(a*j+i);
}