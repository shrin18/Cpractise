#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node* next;
} node_t;

void printlist(node_t *head)
{
  node_t *temporary = head;

  while (temporary!=NULL)
  {
    printf("%d - ", temporary->value);
    temporary = temporary->next;
  }
printf("\n");
}

node_t *create_new_node(int value)
{
  node_t *result = malloc(sizeof(node_t));
  result->value = value;
  result->next = NULL;
  return result;
}

node_t *insert_at_head(node_t *head, node_t *node_to_insert)
{
  node_to_insert->next = head;
  return node_to_insert;
}

int main(void) {
 
  node_t *tmp;
  node_t *head = NULL;

  for (int i=0; i<25; i++ )
  {
    tmp = create_new_node(i);
    head = insert_at_head(head,tmp);
  }
/*
  n1->value = 11;
  n2.value=43;
  n3.value=88;

  head = &n3;
  n3.next = n1;
  n1->next = &n3;
  n2.next = &n2;

  node_t n4;
  n4.value = 13;
  n4.next = &n3;
  n2.next = &n4;

  head = head->next;
  */
  printlist(head);

  return 0;
}
