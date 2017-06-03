#include <stdio.h>

int v2(void);

int main()
{
 v2();
 return 0;
}

int v2(void)
{
 int *p,i;
 p = &i;
 *p = 10;  // 通常変数モードに切り替えたポインタ変数に代入
 printf("*p = %d\n",*p);
 printf("i = %d\n",i);
 return 0;
}
