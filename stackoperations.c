#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define CAPACITY 5

int stack[CAPACITY], top = -1;

void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void peek(void);

void push(int ele){

if(isFull())
  {
    printf("error stack overflow");
  }
  else{
      top++;
      stack[top]  = ele;
      printf("%d pushed", ele );
  }
}


int pop()
{
  if(isEmpty())
  {
    return 0;
  }
  else{
    return stack[top--];    
  }
}

void peek()
{
  if(isEmpty())
  {
    printf("Stack is Empty \n");
  }
  else
  {
    printf("peek element : %d \n", stack[top]);
  }
}

void traverse()
{
  if(isEmpty())
  {
    printf("Stack is empty \n");
  }
  else
  {
    int i;
    printf("stack element : \n");
    for (i=0; i<=top; i++)
    {
      printf("%d \n", stack[i]);
    }
  }
}

int isFull()
{
  if(top == CAPACITY -1)
  {
    return 1;
  }
  else{
    return 0;
  }
}

int isEmpty()
{
  if(top == -1)
  {return 1;}
  else{return 0;}
}

int main() {
  
  int ch, item;
  while(1)
  {
    printf("enter your choice \n");
    scanf("%d", &ch);

    printf("1. push \n");
    printf("2. pop \n");
    printf("3. peek \n");
    printf("4. traverse \n");
    printf("5. quit \n");

    switch(ch)
    {
      case 1:
       printf("Enter element to push \n");
       scanf("%d", &item);
       push(item);
       break;

      case 2: item = pop();
              if(item == 0)
              {
                printf("stack is underflow \n");
              }
              else{
                printf("popped item: %d \n", item);
              }
      break;
      case 3: traverse();
      break;
      case 4: peek();
      break;
      case 5: exit(0);
      deafult: printf("invalid");
    }

    return 0;

  }

}
