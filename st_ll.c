#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int value;
    struct node* next;
}node;

node *head = NULL;

bool push(int value)
{
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL) return false;

    newnode->value = value;
    newnode->next = head;
    head = newnode;
    return true;
}

int pop(){
    if(head == NULL) return INT_MIN;

    int result = head->value;
    node*tmp = head;
    head = head->next;
    free(tmp);
    return result;
}

int main(){
    push(56);
    push(53);

    int t;
    while ((t = pop())!=INT_MIN)
    {
        printf("t = %d\n",t);
    }
}