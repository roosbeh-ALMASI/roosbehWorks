/*  
                   storage class in c
              auto,  register, static, extern

  1. location   , where in memory is going to be stored (mainMemory/CPU register)
  2. lifetime   , how long the piece of memory will be allocated to the variable
  3. scope      , auto = register= static = local,  extern = global 
  4. default-initial-value  auto = register =  garbageValue. static= extern = 0

    storageClass dataType Variable = Value;

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>

extern void functwo(void);
extern char apple; 
//---------------------------------

int main()
{

 
    printf("%c\n", apple);
  

 return 0;

}
