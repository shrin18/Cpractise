#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node* next;
}node_t;

void print_list(node_t *head)
{
  node_t *temp = head;
  while(temp!=NULL)
  {
    printf("%d -", temp->value);
    temp = temp->next;
  }
  printf("\n");
}

void *node_create(int value)
{
  node_t *result = malloc(sizeof(node_t));
  result->value = value;
  result->next = NULL;
  return result;
}

node_t* insert_head(node_t **head, node_t *node_insert)
{
  node_insert->next = *head;
  *head = node_insert;
  return node_insert;
}

node_t* find_list(node_t *head, int value)
{
  node_t *temp = head;
  while (temp != NULL)
  {
    if(temp->value == value)
    {
      return temp;
      temp = temp->next;
    }
    
  }
  return NULL;
}

void *insert_node(node_t *node_after, node_t *newnode )
{
  node_after->next = newnode;
  newnode->next = node_after->next;
}

int main(void) {
  node_t *n1;
  n1 = malloc(sizeof(node_t));
  node_t *head = NULL, *temp;

  for (int i=0; i<15; i++)
  {
  temp = node_create(i);
  //temp->next = head;
  head = insert_head(&head,temp);
  }
  temp = find_list(head, 13);
  printf("found node with value %d\n", temp->value );//newnode = temp
  insert_node(temp,node_create(75));
  print_list(head);

  return 0;
}
