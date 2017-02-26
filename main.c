/*   Dynamic memory allocation         */

/*   
     void   *malloc(size_t size)                  return first add or NULL on fail   
     void   *calloc(size_t No.item, size_t size)  same as above
     void   free(void *ptr)                       no return                 
     unsigned int size_t
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define   _ROW_    3
#define   _COL_    4
int main()
{


int i, j;

int matrix[_ROW_][_COL_];

printf("please fill in you matrix\n");
for(i = 0; i<_ROW_; i++)
{
  for(j=0; j<_COL_; j++)
    { 
      printf("please enter your %d item of you you %d row\n", j+1, i+1);
           scanf("%d", &matrix[i][j]);
      printf("\n"); 
    }  
}

printf("thank you..!\n");
printf("here is you choosen matrix\n");
printf("-------------------------\n");

for(i=0; i< _ROW_ ; i++)
{
  for(j=0; j<_COL_; j++)
     {
        printf("%d ", matrix[i][j]);
     }
  printf("\n");
}


}










