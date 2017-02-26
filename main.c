/*      Macros             */
/*     Careful! macro is like a copy of what you type using your keyboard */
/*     declare marcors as global variables or before being used by anything*/


#include <stdio.h>
#include <stdlib.h>

#define     __WELCOME__       printf("Welcome to the world of C...!\n");
#define     __CON__           (i>j)
#define     __CALCULATE__     (((x * 2) + 3))
//#define     x    4           // works
#define      i     20
#define      j     10

void func(int x, int y);
int main()
{


//int x = 2;              // works

#define    x     6      // works

if(__CON__)
{
  __WELCOME__
}

printf("result from __CALCULATE__ macro = %d\n", __CALCULATE__ );



//#define    x     7      // it wont work, x defined after calling by if()
  
}


void func(int n, int m)
{


if(__CON__)
  {
    printf("sucessful marco usage!!!\n");
  }



}
