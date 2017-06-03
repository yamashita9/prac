#include <stdio.h>

int code(void);
int getaverage(int data[10]);

int main()
{
 code();
 return 0;
}

int code(void)
{
 int average,array[10] = {12,78,45,99,13,46,34,94,61,29};
 average = getaverage(array);
 printf("%d\n",average);
 return 0;
}

int getaverage(int data[10])
{
 int i,average = 0;
 for(i = 0; i < 10; i++){
    average += data[i];
 }
 return average / 10;
}
