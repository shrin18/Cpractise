#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

int ch;
printf("Enter the choice: ");
scanf("%d", &ch);

switch(ch){
  case 0: printf("This is 0th choice ");
  break;

  case 1: printf("This is the first choice ");
  break;

  case 2: printf("This is the second choice ");
  break;

  default: printf("Enter the correct choice ");
}

  return 0;
}
