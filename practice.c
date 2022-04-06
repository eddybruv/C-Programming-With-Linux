#include <stdio.h>

int main(void)
{
      int i;
      double d;
      char s[256];

      scanf("%d", &i);
      scanf("%lf", &d);
      scanf(" %[^\n]*s", s);

      printf("%d\n", i + d);
      printf("%.1lf\n", d + d);
      printf("Hackerrank %s\n", s);

      return 0;
}