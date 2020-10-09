#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  printf("Enter any number to check odd or even : ");
  scanf("%d", &num);
 
  int ch;
  printf("Enter the choice you want: ");
  scanf("%d", &ch);

  int a,b, result;
  printf("Enter two number on which the operations are to be done: ");
  scanf("%d %d", &a, &b);

  switch(ch)
  {
    case 1: 
      printf("You have selected additon\n");
      result = a+b;
      printf("Result is %d\n", result);
      break;

    case 2:
      printf("You have selected multplication\n");
      result = a*b;
      printf("Result is %d\n", result);
      break;

    case 3:
      printf("You have selected division\n");
      result = a/b;
      printf("Result is %d\n", result);
      break;

    case 4:
      printf("You have selected subtraction\n");
      result = a-b;
      printf("Result is %d\n", result);
      break;

    default:
      printf("Select number between 1 and 4");
      break;
  }
  switch(num%2)
  {
    case 0:
      printf("Number is even");
      break;    
    case 1:
      printf("Number is odd");
      break;
  }
  return 0;
}
