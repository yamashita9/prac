#include <stdio.h>

int saint(void);
void func(int *pvalue);

int main(void)
{
 saint();
 return 0;
}

int saint(void)
{
 int value = 10;
 printf("&value = %p\n",&value);
 func(&value);                    // アドレスを渡す
 printf("value = %d\n",value);
 return 0;
}

void func(int *pvalue)
{
 printf("pvalue = %p\n",&pvalue);
 *pvalue = 100;                   // 通常変数モードに切り替えて代入
 return;
}
