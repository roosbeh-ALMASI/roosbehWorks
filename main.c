#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>


int *func(void);
void funky(int* (*jocker)(void));

int main()
{
 funky(&func);

}

//---------------------------------------------------------


int *func(void)
{
  
  static int arr[5] = {1, 2, 3, 4, 5};

  return arr;
}

void funky(int* (*jocker)())
{
  int *ptr;
  int i;
  ptr = jocker();
  for(i=0; i<5; i++)
     {
       printf("item %d is at %p = %d\n", i+1, ptr+i, *(ptr+i));
     }
       
}
