#include <stdio.h>
int main()
{
  int arr[100];
  int max = arr[0];
  int min = arr[0];
  int n;

  printf("Enter size: ");
  scanf("%d", &n);

  printf("Enter array elements: ");
  for(int i=0; i<n-1; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i=0; i<n-1; i++)
  {
    if(arr[i]>arr[0])
    {
      max = arr[i];
    }
    else{
      max = arr[0];
    }
  }

  for (int i=0; i<n-1; i++)
  {
    if(arr[i]<arr[0])
    {
      min = arr[i];
    }
    else{
      min = arr[0];
    }
  }

printf("Highest value in array is %d \n", max);

printf("Lowest value in array is %d", min);

  return 0;
}