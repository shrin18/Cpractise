#include <stdio.h>
#include <limits.h>

int main(void) {
  
  int arr[4] = {1,4,14,15};
  int size = 4;
  int sum = 0;
  
  int n;
  int count = 0;

  printf("Enter the integer whose occurences is required  ");
  scanf("%d", &n);

 
  while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }
  
  printf("\n Number of digits: %d\n", count);

  for (int j=size-1; j>=0; j--)
  {
    printf("%d \t", arr[j]);
  }

  for (int i=0; i<size; i++)
  {
    sum = sum + arr[i];
  }
  printf("\n Sum of array is %d", sum);


  return 0;
}
