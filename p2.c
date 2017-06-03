#include <stdio.h>

int nexas(void);

int a=0,i;

int main(void)
{
 nexas();
 return 0;
}

int nexas(void)
{
 for(i = 0; i<6; i++)
 {
  printf("%d\n",i);
  a = a + i;
 }
  printf("\n%d\n",a);
  return 0;
}
