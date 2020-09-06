#include <stdio.h>
#include <stdlib.h>

typedef struct node{
 int value;
 struct node *next;
}node;

node * create(int n){
    node * head = NULL;
    node * temp = NULL;
    node * p = NULL;
 
  for(int i = 0; i < n ; i++){
  
  //create individual note
  temp = (node*)malloc(sizeof(node));
  printf("\nNode created, please enter  value for the node: %d ", (i+1));
  scanf("%d",&(temp->value));
  temp->next=NULL;
  
    if(head == NULL)
      {
        head = temp;
      }
        else{
          p = head;
            while(p->next!= NULL)
            p = p->next;
            p->next = temp;
            }   
      }
 
 return head;
}

void display(node * head){
 node * p = head;

 while(p != NULL)
 {
  printf("\t %d->",p->value);
  p = p->next;
 }
}

int main(){
  int n=0;
  node * head = NULL;
  printf("how many nodes do you want to create?");
  scanf("%d",&n);
  
  head = create(n);
  display(head);
  
 return 0;  
}

  

