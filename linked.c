#include <stdio.h>
#include <stdlib.h>

//Our node is going to be a struct
//This struct has two paramters value and node pointer
struct node{
    int value;
    struct node* next;
};

//This is because we do not have to define
//node again and again
typedef struct node node_t;

//This is a print list function
//This prints a function
void printlist(node_t *head){
    node_t *temporary = head;

    while(temporary!=NULL){
        printf("%d->", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *create_new_node(int value){
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

node_t *find_node(node_t *head, int value){
    node_t *tmp = head;
    while(tmp!=NULL){
        if(tmp->value == value) return tmp;
        tmp = tmp->next;
    }
    return NULL;
}

node_t *insert_node(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert; 
}

node_t *insert_after(node_t *node_to_insert_after, node_t *newnode){
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;
}

int main(){

    //Create three node and a head pointer
    //node_t n1, n2, n3;
    node_t *head = NULL;
    node_t *tmp;

    insert_after(tmp, create_new_node(56));

    tmp = create_new_node(45);
    head = tmp;

    tmp = create_new_node(67);
    tmp->next = head;
    head = tmp;

    tmp = find_node(head, 13);
    printf("Found node with value %d\n", tmp->value);
    //Add each element at the front of the list.
    for (int i=0; i<25; i++)
    {
        tmp = create_new_node(i);
        tmp->next = head;
        head = tmp;
    }

    tmp = create_new_node(32);
    tmp->next = head;
    head = tmp;

    //node_t n4;
    //n4.value = 32;

    //Set value to all the pointers
    /*n1 = malloc(sizeof(node_t));
    n1->value = 441;
    n2.value = 55;
    n3.value = 78;
    
    head = n1;
    //Link them
    n3.next = NULL;
    n2.next = &n3;
    //n4.next = &n1;
    n1->next = &n2;

    //head = head->next;
    */ 
    printlist(head);

    return 0;

}