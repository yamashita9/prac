#include <stdio.h>

int de(void);

int main()
{
 de();
 return 0;
}

int de(void)
{
 int *data;
 int i;
 int average = 0;
 int array[10] = {55,34,29.86,77,19,53,47,83,27};

 data = array;       // ポインタ変数に配列のアドレスを代入

 for( i = 0; i < 10; i++){
    average += data[i];
 }

 printf("%d\n",average / 10);
 return 0;
}
