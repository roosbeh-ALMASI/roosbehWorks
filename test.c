#include "test.h"


struct menu{

char *str;
int (*handler)(void);

};


int callback_1(void);
int callback_2(void);
int callback_3(void);
void Display_menu(void);


struct menu main_menu[3] = {

{"1. Leicester", callback_1 },
{"2. Sunbury-on-Thames", callback_2},
{"3. Persia", callback_3 }

};


int main(void)
{

char ch = '\0';


Display_menu();

printf("Pealse enter a character\n");
scanf("%c", &ch);

if(ch == '1')
{
  
  main_menu[0].handler();
  
}

else if(ch == '2')
{
 
 main_menu[1].handler();

}

else if(ch == '3')
{
  main_menu[2].handler();
}




return 0;
}

//------------------------------------------------------


int callback_1(void)
{
  printf("I am the 1st 1st 1st callback function\n");
  return 1;
}

int callback_2(void)
{
 printf("I am the 2nd 2nd 2nd callback function\n");
 return 1;
}

int callback_3(void)
{
 printf("I am the 3rd 3rd 3rd callback function\n");
 return 1;
}

void Display_menu(void)
{

int i = 0;
for(i=0; i<3; i++) 
  {
    printf("%s\n", main_menu[i].str);
  }
} 







































/*

int main(void)
{

int i, j;

for(i=-1; i<10; i++)
   {
     if(i == 8)
       {
         printf(" R");
       }
     else
       {
         printf("  ");
       }
    
   }
printf("\n");



for(i=-1; i<10; i++)
    {
      printf("%d ", i);      
    }

printf("\n");

return 0;
}


*/


