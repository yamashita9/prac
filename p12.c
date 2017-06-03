#include <stdio.h>

int xxxo(void);
int getaverage(int data[10]);

int main()
{
 xxxo();
 return 0;
}

int xxxo(void)
{
 int average,array[10] = {34,28,71,55,76,11,14,46,37,29};
 printf("array[3] = %d\n",array[3]);
 average = getaverage(array);
 printf("array[3] = %d\n",array[3]);
 printf("%d\n",average);
 return 0;
}

int getaverage(int data[10])
{
 int i,average = 0;
 for (i = 0; i < 10; i++){
    average += data[i];
 }
 data[3] = 111;           // 引数の配列の値を変更
 return average / 10;
}
