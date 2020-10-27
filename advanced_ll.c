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
    printf("%d-", temp->value);
    temp = temp->next;
  }
  printf("\n");
}

void *create_node(int value)
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
  
node_t *find_list(node_t *head, int value)
{
  node_t *temp = head;
  while (temp!=NULL)
  {
    if(temp->value == value)
    {
      return temp;
      temp = temp->next;
    }
  }
  return NULL;
}

void *insert_node(node_t *after_node, node_t *newnode)
{
  after_node->next = newnode;
  newnode->next = after_node->next;
}

int main()
{
  node_t *n1;
  n1 = malloc(sizeof(node_t));

  node_t *head = NULL,*temp;

  for(int i=0; i<5; i++)
  {
    temp = create_node(i);
    head = insert_head(&head, temp);
  }
  temp = find_list(head,13);

  printf("found node %d\n", temp->value);
  insert_node(temp,create_node(75));
  print_list(head);

  return 0;
}