/*
                           Ring Buffer
      
               Queue (FIFO) , Linklist , STACK(LIFO) 
*************************************************************/
                                                                                 
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define    QSIZE    5

typedef enum{
false,
true
}bool;

bool isEmpty(void);
bool  isFull(void);
void    show(void);
uint8_t  enQ(char x); 
uint8_t  deQ(void);
void menu(void);
void Index(void);

char Q[QSIZE];
int rear  = -1;
int front = -1;

//---------------------------------------

int main(void)
{

while(1)
       {
          menu();
       }
return 0;
}

//-----------------------------------------


uint8_t enQ(char x)
{
  if(isFull() == true)
    {
      printf("sorry the Q is full\n");
      return '\0';
      
    }
  else if(isEmpty() == true)
    {
       rear = 0;
      front = 0;
      Q[rear] = x;
      return '1';
    }
  else
    {
      rear = (rear+1) % QSIZE;
      Q[rear] = x;
      return '1';
    }
  
}

uint8_t deQ(void)
{

char temp = '\0';

  if(isEmpty() == true)
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
   return temp;
}


bool isEmpty(void)
{
    if(rear == -1 && front == -1)
       {
         return true;
       }
     else
       {
         return false;
       }
}

bool isFull(void)
{

  if(((rear+1)%QSIZE) == front)
    {
      return true;
    }
  else
    {
      return false;
    }
}

void show(void)
{
  int i = 0;
  int j = 0;
   
  if(isEmpty() == true)
    {
      printf("Sorry the Q is Empty\n");      
    }
   else
    {

printf("\n\n---------- available items ----\n");
       while(front != rear)
        {
          printf("%c,  ", Q[front]);
          front = (front +1)%QSIZE;
        }
       printf("\n\n");
    }
}
 

void menu(void)
{
  char choice; 
  char ch;

loop:  printf("\n--------- Q MENU -------------\n");
  printf("0. Exit the MUNU\n");
  printf("1. show the items in the Q\n");
  printf("2. Enqueue an item\n");
  printf("3. Dequeue an item\n");
  printf("4. check if Q is full\n");
  printf("5. chack if Q is empty\n");
  printf("6. show pointer indexes\n");
  printf("Please ur choice\n");
  printf(">> ");
  scanf("%c%*c", &choice);
 
 switch(choice)
  {
    case '0':        
        printf("Goodbye\n");
        exit(0);
    break;

  
    case '1':
          show(); 
    break;
    

    case '2':
         printf("insert a char\n");
         scanf("%c%*c", &ch );
         enQ(ch); 
    break;


    case '3':
         deQ();
    break;


    case '4':
         if(isFull() == true)
           {
             printf("Yes, the buffer is full\n");
           }
           else{
                 printf("No the buffer is not full\n");
               }
    break;

    case '5':
          if(isEmpty() == true)
            {
               printf("Yes, the buffer is empty\n");
            }else{
                     printf("No, the buffer is not empty0");
                 }
    break;

   
    case '6':
        Index();
    break;
         
   default:    
        printf("Entered a wrong charachter");  
        goto loop;               
    break;

  } 

}

void Index(void)
{

 int i = 0;

 printf("rear index  ");
 for(i=0; i<5; i++)
  {
    printf("%d ", rear);
  }  

  printf("\nfront index "); 
 for(i=0; i<5; i++)
  {
    printf("%d ", front);   
  }
  
  printf("\n");
}














