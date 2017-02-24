#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int arr[5], i, j;


for(i=0; i<5; i++)
{
printf("please enter your %d item \n", i+1);
scanf("%d", &arr[i] );
}

for(i=0; i<5; i++)
printf("%d item = %d\n", i+1, arr[i]);


return 0;
}
