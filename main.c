/*                  function Macros             */

#include <stdio.h>


#define      x               10
#define      b               15
#define    __CON1__          (x > b)
#define    __EXPRESSION__    (k*4)
#define    __WORDS__ONE__    printf("this is is successful marco\n");
#define    __WORDS__TWO__    printf("this second successful ....!\n");

/*  macro as function */

#define    __ROOSBEH__FUNC__(num1, num2)       if(__CON1__) { __WORDS__ONE__ } else{__WORDS__TWO__} 




int main(void)
{

 __ROOSBEH__FUNC__(x, b);  // dont forget ;

#define     k    100

printf("\n\n -- %d -- \n\n", __EXPRESSION__);

 return 0;
}
