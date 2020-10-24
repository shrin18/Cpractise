#include <stdio.h>
#include <stdlib.h>
#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE * 8 - 1

int rotateLeft(int num, unsigned int rotation);
int rotateRight(int num, unsigned int rotation);

int rotateLeft(int num, unsigned int rotation)
{
  int DROPPED_MSB;

  rotation %= INT_BITS;

  while(rotation--)
  {
    DROPPED_MSB = (num >> INT_BITS) & 1;
    num = (num << 1) | DROPPED_MSB;
  }
  return num;
}

int rotateRight(int num, unsigned int rotation)
{
  int DROPPED_LSB;

  rotation %= INT_BITS;

  while(rotation--)
  {
    DROPPED_LSB = num & 1;
    num = (num >> 1) & (~(1<< INT_BITS));
    num = num | (DROPPED_LSB << INT_BITS);
  }
  return num;
}


int main(void) {

  int num, count, i;
  unsigned int rotation;
  printf("Enter a number:");
  scanf("%d", &num);

  printf("Enter number of rotations: ");
  scanf("%u", &rotation);

  printf("%d left rotated %u times = %d\n\n", num, rotation, rotateLeft(num, rotation));

  printf("%d left rotated %u times = %d\n\n", num, rotation, rotateRight(num, rotation));

  
  
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
