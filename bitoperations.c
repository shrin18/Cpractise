#include <stdio.h>
#include <stdlib.h>
#define INT_SIZE sizeof(int) * 8

int main(void) {
  
  int num, count, i;
  printf("Enter any number:");
  scanf("%d", &num);

  count = 0;

  for(i=0;i<INT_SIZE;i++)
  {
    if((num >> i) & 1)
    {
      break;
    }
    count ++;
  }

  printf("Total number of trailing zeroes in %d is %d", num, count);

  while(!(num&1))
  {
    count ++;
    num >>=1;
  }

  int num1,num2;

  printf("\nTotal number of trailing zeroes = %d", count);

  printf("\nEnter any two numbers: ");
  scanf("%d%d", &num1, &num2);

  printf("Original value of num1 is %d\n", num1);
  printf("Original value of num2 is %d\n", num2);

  num1 ^= num2;
  num2 ^= num1;
  num1 ^= num2;

  printf("Num1 after swapping = %d\n", num1);
  printf("Num2 after swapping = %d\n", num2);


  if(num & 1)
  {
    printf("LBS of %d is set (1)", num);
  }
  else
    printf("LSB of %d is unset (0)", num);
  return 0;
}
