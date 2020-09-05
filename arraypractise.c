#include <stdio.h>

int main(void) {
 
int arr[5] = {1,3,5,7,9};
int max = arr[0];
int min = arr[0];

for (int i=0; i<5; i++)
{
  if (arr[i]>arr[0])
  {
    max = arr[i];
  }
  else {
    max = arr[0];
  }
}

for (int i=0; i<5; i++)
{
  if (arr[i]<arr[0])
  {
    min = arr[i];
  }
  else {
    min = arr[0];
  }
}

printf("Highest value in array is %d \n", max);

printf("Lowest value in array is %d", min);

  return 0;
}
