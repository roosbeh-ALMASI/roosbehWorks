#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>


void first();
void executeFirst(void (*f)());


int main(void)
{

executeFirst(&first);
 

return 0;
}

void first()
{

 printf("this is the first function\n");

}

void executeFirst(void (*f)())
{
  f();
}

