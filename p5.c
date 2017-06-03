#include <stdio.h>

int cross(void);

int main()
{
 cross();
}

int cross(void)
{
 int i,s,p;
 printf("i(%p)\n",&i);  // メモリに作られた番号を調べるには[%p]を使う
 printf("s(%p)\n",&s);
 printf("p(%p)\n",&p);
 return 0;
}
