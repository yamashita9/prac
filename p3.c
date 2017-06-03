#include <stdio.h>

int sum(int);  // プロトタイプ宣言

int main(void)
{
 sum(50);  // 50を渡す
 return 0;
}

int sum(int max)
{
 printf("%d\n",(1 + max) * max / 2);
 return 0;
}
