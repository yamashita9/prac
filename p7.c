#include <stdio.h>

int victory(void);

int main(void)
{
 victory();
 return 0;
}

int victory(void)
{
 int *p,i;
 p = &i;    // iのポインタの場所をポインタ変数pに代入する
 printf("pのポインタ値 %p\n",p);
 printf("iの値 %p\n",&i);
 return 0;
}
