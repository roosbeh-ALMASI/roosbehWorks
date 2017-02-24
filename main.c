#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void showoff(int argc, char *argv)
{
   int i = 0;
   while(*(argv+i) != '\0')
    {
       printf("%c, ", *(argv+i));
       i++;
    }
   
}

void stor(char *argv);





//------------------------------------------

int main(void)
{
  int i;
  char arr[] ="roosbeh almasi";
   
  for(i = 0; i<15; i++)
     {
       if(arr[i] == 0x20 || arr[i] == '\0')
         {
          printf("\n");
         }
       printf("%x, ", arr[i]);
     }

}


