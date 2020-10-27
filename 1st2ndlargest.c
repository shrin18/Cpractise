#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_SIZE 1000

int main()
{
  int arr[MAX_SIZE], size, i;
  int max1,max2;

  printf("Enter the size of the array\n");
  scanf("%d", &size);

  int count = 0;
  printf("Enter the array elements\n");
  for(i=0;i<size;i++)
  {
    scanf("%d", &arr[i]);
  }

  for(i=0; i<size; i++)
  {
    if(arr[i]>max1)
    {
      max2 = max1;
      max1 = arr[i];
    }
    else if(arr[i]>max2 && arr[i]<max1)
    {
      max2 = arr[i];
    }
    }

    printf("Largest element is %d\n", max1);
    printf("Second largest element is %d", max2);

    return 0;
  }
