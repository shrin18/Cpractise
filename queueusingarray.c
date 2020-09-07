#include <stdio.h>
#define CAPACITY 50

int queue[CAPACITY];
int rear = 0;
int front = 0;

void insert();
void delete();
void display();

void insert(int ele)
{
  if (CAPACITY == rear)
  {
    printf("Queue is full");
  }
  else
  {
    int ele;
    printf("Enter ele");
    scanf ("%d", &ele);

    queue[rear] = ele;
    rear ++;
  }
}

void delete()
{
  if (front == rear)
  {
    printf("Queue is Empty");
  }
  else{
    printf("deleted item is %d", queue[front]);
  }
}

void traverse()
{
  if (front == rear)
  {
    printf("Queue is empty");
  }
  else
  {
    printf("Queue elements:");
    for (int i=0;i<rear;i++)
    {
      printf("%d\n", queue[i]);
      queue[i] = queue[i+1];
    }
    rear --;
  }
}

int main()
{
  insert(43);
  delete();
  
  return 0;
}

