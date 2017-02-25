#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

struct apple{

char name[20];
char surename[20];
uint16_t age;    // unsigned short
float grade;


   struct{
   
          int houseNum;
          char street[50];
          char postCode[10];  
 
         }bobo;

};



//-------------------------------------------

int main()
{

struct apple lemon = {"roosbeh", "almasi", 35, 2.1, 19, "tichborne", "TW167NU"};
struct apple *ptr;
ptr = &lemon;

printf("%s\n", lemon.bobo.postCode );
printf("%s\n", ptr->name);
printf("%s\n", ptr->bobo.street);
return 0;
}
