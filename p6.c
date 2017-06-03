#include <stdio.h>

int seed(void);

int main()
{
 seed();
}

int seed(void)
{
 int a[10];
 for(int b = 0; b <=9; b++)
 {
  printf("a[%d]メモリの場所(%p)\n",b,&a[b]);
 }
 return 0;
}
