#include <stdio.h>
#include "test.h"


//void showString(void);

int main()
{

int i, j;
char lemon[5] = {'A', 'B', 'C', 'D', 'E'};
int arr[10]={9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

for(i= 0; i<9; i++)
{
 for(j = i+1; j<10; j++)
   {
     if(arr[i] > arr[j])
       {
         Swap(&arr[i], &arr[j]);
       }
   }

}

for(i=0; i<10; i++)
{
  printf("%d, ", arr[i]);
}


showString();

return 0;
}
