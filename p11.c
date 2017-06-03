#include <stdio.h>

int wing(void);
int getaverage(int data[10]);

int main(void)
{
 wing();
 return 0;
}

int wing(void)
{
 int average,array[5] = {15,89,37,41,93};
 average = getaverage(array);
 printf("%d\n",average);
 return 0;
}

int getaverage(int data[10])
{
 int i,average = 0;
 for (i = 0; i < 10; i++){
   average += data[i];
 }
 return average / 10;
}
