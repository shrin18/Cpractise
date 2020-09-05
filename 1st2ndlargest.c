#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 1000

int main(void) {
  
  int arr[MAX_SIZE], size, i;
  int max1, max2;

  printf("Enter the size of the array \t");
  scanf (" \t %d", &size);
  int count = 0;
  printf("Enter the elements of the array\n");
  for (i=0; i<size; i++)
  {
  
  scanf("%d", &arr[i]);
  count ++;
  
   if (count <size)
  {
    count = count + 1;
    }
  }
  printf ("Count is less than elements %d", count);
  max1 = max2 = INT_MIN;

  for (i=0;i<size;i++)
  {
    if (arr[i] > max1)
    {
      max2 = max1;
      max1 = arr[i];
    }
    else if(arr[i] > max2 && arr[i] < max1)
    {
      max2 = arr[i];

    }
  }

  printf("First largest element is %d \n", max1);
  printf("Second largest element is %d", max2);

  return 0;
}
