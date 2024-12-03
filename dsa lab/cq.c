#include<stdio.h> 
#include<stdlib.h> 
 
#define MAXSIZE 5 
 
char cq[MAXSIZE]; 
int front, rear; 
 
void insert(char item); 
void del( ); 
void display( ); 
 
int main( ) 
{ 
char item; 
int choice,i; 
front=-1; 
rear=-1; 
      do 
       { 
  printf("\n\n-------CIRCULAR QUEUE MENU------------\n"); 
  printf("\n1. INSERT INTO QUEUE \n2. DELETE FROM QUEUE \n3.DISPLAY QUEUE \n4. EXIT\n"); 

  printf("\n\nENTER YOUR CHOICE: "); 
  scanf("%d",&choice); 
  switch(choice) 
  { 
    case 1: printf("\nENTER THE QUEUE ELEMENT : "); 
     scanf("%s",&item); 
     insert(item); 
     break; 

    case 2: del(); 
    break; 
    case 3: display(); 
     break; 
    case 4: exit(0); 
    default: printf("\nInvalid Choice.\n"); 
  } 
 }while(choice!=4); 
  return 0; 
 } 
  void insert(char item) 
  { 
   if(front==(rear+1)%MAXSIZE) 
   printf("\n\nCIRCULAR QUEUE IS OVERFLOW\n"); 
   else 
   { 
    if(front==-1) 
    front=rear=0; 
    else 
     rear=(rear+1)%MAXSIZE; 
     cq[rear]=item; 
     printf("\nRear = %d Front = %d \n",rear,front); 
 
 
 
   } 
  } 
  void del() 
  { 
   char item; 
   if(front==-1) 
   printf("\nCIRCULAR QUEUE IS UNDERFLOW\n"); 
   else 
   { 
    item=cq[front]; 
    cq[front]='0'; 
    if(front==rear) 
    front=rear=-1; 
    else 
    front=(front+1)%MAXSIZE; 
    printf("\nDELETED ELEMENT FROM QUEUE IS : %c \n",item); 
    printf("\nRear = %d Front = %d \n",rear,front); 
   }
  }

  void display() 
  { 
   int i; 
   if(front==-1) 
   printf("CIRCULAR QUEUE IS EMPTY\n"); 
   else 
   { 
    printf("The Queue Elements are\n"); 
    for(i=0;i<MAXSIZE;i++) 
    printf("%c\t",cq[i]); 
   } 
  } 
 
 
