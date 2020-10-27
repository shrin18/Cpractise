#include <stdio.h>
#define MAX_SIZE 100

int main(){
  int arr[MAX_SIZE];
  int i, size, position;

  printf("Enter array size: ");
  scanf("%d", &size);

  printf("Enter array elements: ");
  for(i=0; i<size; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter the position for deleting: ");
  scanf("%d", &position);

  if (position < 0 || position > size)
    printf("Invalid");
  else
  {
    for(i=position; i<size-1; i++)
    {
      arr[i]= arr[i+1];
    }
    size--;

    printf("\nNew array: ");
    for(i=0;i<size;i++)
    {
      printf("%d\t", arr[i]);
    }
  }

  return 0;
}