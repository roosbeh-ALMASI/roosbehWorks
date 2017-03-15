/*      a bit of fun with string formating   */
/*   

#include <stdarg.h>   // this have the following mcros and type

va_list       <-- this is a type

type  va_arg()   
void  va_start()  
void  va_end()
void  va_copy() 

 */


#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>


void roosbeh_format_Str(const char *str);
void testArgs(char x, ...);
int main()
{



testArgs('A', 3, 'V', 'D', 'L');

roosbeh_format_Str("the value is : %d and located at : and %f is at and %c is at\n");

return 0;

}



void roosbeh_format_Str(const char *str)
{
  while(*str != '\0')
       {
         if(*str == '%')
           {
             *str++;
             switch(*str)
             {
               case 'd':
                  printf("this is a int\n");
               break;
               
               case 'f':
                 printf("this is a float\n");
               break;

              case 'c':
                 printf("this is a character\n");
              break;

             } 
           }
       *str++;         
       }
}



void testArgs(char x, ...)
{

  va_list lili;          //must be declared

 va_start(lili, x);
s
  printf("it is quiet\n");
}


