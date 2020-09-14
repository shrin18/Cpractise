#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define INT_MIN  (-2147483647 - 1)
#define QUEUE_EMPTY INT_MIN

typedef struct node {
  int value;
  struct node *next;
}node;

typedef struct 
{
  node *head;
  node *tail;
}queue;


void init_queue(queue *q)
{
  q->head = NULL;
  q->tail = NULL;
}

bool enqueue(queue *q, int value)
{
  node *newnode = malloc(sizeof(node));
  if (newnode == NULL) return false;
  newnode->value = value;
  newnode->next =  NULL;

  if(q->tail != NULL){
    q->tail->next = newnode;
  }
  q->tail = newnode;
  if(q->head == NULL)
  {
    q->head = newnode;
  }
  return true;
}

int dequeue(queue *q)
{
  if(q->head == NULL) return QUEUE_EMPTY;
  node *tmp = q->head;
  int result = tmp->value;
  q->head = q->head->next;

  if (q->head == NULL)
  {
    q->tail = NULL;
}
free (tmp);
return result;
}

int main(void) {
 
  queue q1 ;
  queue q2 ;
  queue q3 ;

  init_queue(&q1);
  init_queue(&q2);
  init_queue(&q3);

  enqueue(&q1, 31 );
  enqueue(&q2, 51 );
  enqueue(&q3, 76 );

  int t;

    while ((t = dequeue(&q1)) != QUEUE_EMPTY)
  {
    printf("\n t = %d\n", t);
  }


  while ((t = dequeue(&q2)) != QUEUE_EMPTY)
  {
    printf("\n t = %d\n", t);
  }



  while ((t = dequeue(&q3)) != QUEUE_EMPTY)
  {
    printf("\n t = %d\n", t);
  }

  return 0;
}
