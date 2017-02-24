#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sumUp(int *arr, int s);
void swap(int *x, int *y);

int main(void)
{
int i;

int lemon[5]={5, 4, 3, 2, 1};
sort(lemon, 5);

for(i=0; i<5; i++)
{
  printf("%d, ", lemon[i]);
}


}



//------------------------------------
void swap(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y=temp;
}


void sort(int *arr, int s)
{
  
  int i, j;
  for(i = 0; i<s-1; i++)
    {
       for(j=i+1; j<s; j++)
         {
            if(*(arr+i) > *(arr+j))
             {
               swap(arr+i, arr+j);
             }
         }
    }
}
