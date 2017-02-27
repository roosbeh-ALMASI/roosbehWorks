/*      a bit of fun with function, pointer, shift register and array   */



#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void funcky(unsigned char *buffer, int size);

int main()
{

unsigned char arr[10];

arr[0] = 0xA0;
arr[1] = 0x00;
arr[2] = 0xB0;
arr[3] = 0x00;
arr[4] = 0xF0;
arr[5] = 0xF0;
arr[6] = 0x03;
arr[7] = 0x01;
arr[8] = 0x00;
arr[9] = 0x0F;

funcky(arr, 10);

return 0;

}



void funcky(unsigned char *buffer, int size)
{

int j = 0;
int i = 0;
int sum = 0;
uint8_t shift = 0x80;

for(i=0; i<size; i++)
{
  if( *(buffer+i) != 0 )
    {
         for(j=8; j>0; j--)
            {
               if((shift & *(buffer+i)) != 0)
                 {
                    sum++;
                 }
              
               
                shift = (shift >> 1);  
            }
    
          shift = 0x80;     // I forgot to reset this shift register
    }
}
printf("total number of set bits : %d\n", sum);

}
