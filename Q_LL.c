#include <stdio.h>
#include <stdlib.h>

struct Qnode {
  int key;
  struct Qnode* next;
};

struct Queue {
  struct Qnode *front, *rear;
};

struct Qnode* newNode(int k)
{
  struct Qnode* temp = (struct Qnode*)malloc(sizeof(struct Qnode));
  temp->key = k;
  temp->next = NULL;
  return temp;
}

struct Queue* createQueue()
{
  struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
  q->front = q->rear = NULL;
  return q; 
}

void enQueue(struct Queue*q, int k)
{
  struct Qnode* temp = newNode(k);
  if (q->rear == NULL)
  {
    q->front = q->rear = temp; 
    return;
  }

  q->rear->next = temp;
  q->rear = temp;
}

void deQueue(struct Queue*q)
{
  if(q->front == NULL)
    return;
  struct Qnode* temp = q->front;
  q->front = q->front->next;

  if (q->front == NULL)
  q->rear = NULL;

  free(temp);
}



int main(void) {
  struct Queue *q = createQueue();
  enQueue(q, 10);
  enQueue(q, 30);
  enQueue(q, 60);
  enQueue(q, 55);
  enQueue(q, 67);
  deQueue(q);
  deQueue(q);

  printf("Queue Front : %d \n", q->front->key);
  printf("Queue rear : %d \n", q->rear->key);
  return 0;
}
