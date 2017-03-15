/*      a bit of fun with function, pointer, shift register and array   */



#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


void roosbeh_puts(const char *str);

int main()
{



roosbeh_puts("this is going to be awsome\n");


return 0;

}

void roosbeh_puts(const char *str)
{
  
  while(*str != '\0')
      {
         putchar(*str);
         *str++;
      }

}


