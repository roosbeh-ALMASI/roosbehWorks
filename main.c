/*
                           Ring Buffer
      
               Queue (FIFO) , Linklist , STACK(LIFO) 
*************************************************************/
                                                                                 
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define    QSIZE    10


typedef enum{
false,
true
}bool;


struct menu{
char *str;
int  (*handler)(void);
};




int     isEmpty(void);
int     isFull(void);
int     showQ(void);
int     indexPointers(void);
int     displayMenu(void);
int     exitMenu(void);
int     deQ(void);
int     enQ(void); 
void processChoice(char *ptr);



struct menu main_menu[7] = {

{"0. Exit the Menu ", exitMenu },
{"1. Show the availbe items in the Q", showQ},
{"2. Enqueue an intem ", enQ },
{"3. Dequeue an intem ", deQ},
{"4. Check if the Q is empty ", isEmpty},
{"5. Check if the Q is full ",  isFull},
{"6. show the position of the front and rear pointers in the Q", indexPointers }

};


char Q[QSIZE];

int rear  = -1;
int front = -1;
char ch;
char newItem;

//---------------------------------------

int main(void)
{


while(1)
{
	displayMenu();
	printf("make a choice\n");
	scanf("%c%*c", &ch);
	processChoice(&ch);
}

return 0;
}

//-----------------------------------------


int exitMenu(void)
{
  printf("Goodbye\n");
   exit(0);
   return 0;
}


int enQ(void)
{
  if(isFull() == 1)
    {
      printf("sorry the Q is full\n");
      return '\0';
      
    }
  else if(isEmpty() == 1)
    {
     printf("enter a char to enqueue\n");
     scanf("%c%*c", &newItem);
       rear = 0;
      front = 0;
      Q[rear] = newItem;
      return 1;
    }
  else
    {

      
     printf("enter a char to enqueue\n");
     scanf("%c%*c", &newItem);
      rear = (rear+1) % QSIZE;
      Q[rear] = newItem;
      return 1;
    }
  
}

int deQ(void)
{

char temp = '\0';

  if(isEmpty() ==  1)
     {
       printf("Sorry the Q is already empty\n");
       return -1;
     }
   else if(rear == front)   // only one item in the Q
     {         
       temp = Q[front];
       rear = -1;
       front = -1;
     }
    else
     {
       temp = Q[front];
       front = (front+1)%QSIZE;
     }
   return 1;
}


int isEmpty(void)
{
    if(rear == -1 && front == -1)
       {
         return 1;
       }
     else
       {
         return 0;
       }
}

int isFull(void)
{

  if(((rear+1)%QSIZE) == front)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int showQ(void)
{
  int i = 0;
  
   
  if(isEmpty() == 1)
    {
      printf("Sorry the Q is Empty\n");      
    }
   else
    {

printf("\n\n---------- available items ----\n");

i=front;

       while(i != rear)
        {
          printf("%c,  ", Q[i]);
          i = (i +1)%QSIZE;
        }
       printf("\n\n");
    }
}
 



int indexPointers(void)
{

 int i = -1;
 
printf("------------------\n");
 
 for(i=-1; i<=rear; i++)
  {
      
    if(i != rear)
      {
          if(i == -1)
            {
              printf("  ");
            }
          else
            {
              printf(" ");
            }
      }
     else
      {
       printf("r");
      }
  }  




  printf("\n");
 for(i=-1; i<QSIZE; i++)
    {
      printf("%d ", i);
    }
  printf("\n");


 
 for(i=-1; i<=front; i++)
  {
    if(i != front)
      {
           
          if(i == -1)
            {
              printf("  ");
            }
          else
            {
              printf(" ");
            }

      }
     else
      {
       printf("f");
      }
  }  

printf("\n---------------------\n");

}


int  displayMenu(void)
{

int i = 0;
for(i=0; i<7; i++) 
  {
    printf("%s\n", main_menu[i].str);
  }
} 

void processChoice(char *ptr)
{
  switch(*ptr)
       {
	 case '0':
	    exitMenu();
	 break;
	 
	 case '1':
	    showQ();
	 break;

	 case '2':
	    enQ();
	 break;

	 case '3':
	    deQ();
	 break;
	   
	 case '4':
	    isEmpty();
	 break;

	 case '5':
	    isFull();
	  break;

	 case '6':
	    indexPointers();
	  break;
	 
	 default:

	 break;
       }

}

