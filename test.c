#include <stdio.h>
#include "test.h"

void showString(void)
{

int i=0;
for(i=0; i<10; i++)
printf("I am very fool\n");

}


void Swap(int *x, int *y)
{

int temp;
temp = *x;
*x = *y;
*y = temp;
}


