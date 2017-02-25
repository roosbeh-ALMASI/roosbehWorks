#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int i;

char karak[8] = "Roosbeh";
int  adad[] = {1,2, 3, 4, 5};
float flower[] = {1.5, 2.5, 3.5, 4.5, 5.5};

void *ptr;
char *p;
unsigned char index;

//--------------- Void Pointer -------------------------

ptr = (void *)karak;

for(i=0; i<8; i++)
{
  printf("at %p = %c\n", ptr, *((char *)ptr));
  ptr = (void *)((char *)ptr+1);
}


//----------------- cast non void   ---------------

p = (char *)flower;
for(i=0; i<5; i++)
{

printf("at %p = %f\n", p , *((float *)p));
p = (char *)((float *)p+1);
}

  return 0;

}


