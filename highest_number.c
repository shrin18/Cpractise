#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

void delay(int j)
{
  printf("This is the C program that will be executed within 10 seconds", &j);
  delay(1000);
  printf("The delay after this point is 500 ms");

  delay(100);
  printf("The results of the checkster were completed just now");
    
  delay(500);
  return 0;

}

int p;

p = sizeof(calloc(4, sizeof(double));

int addnumericals(int a, int b)
{
  printf("Enter any two numbers of your choice whose addition is required to be returned");
  scanf("%d, %d", &a, &b);
  return a+b;
}

int main()
{
    int num1, num2, num3, num4;
    addnumericals(num1,num2);

    int  a,b;
    float c,d;

    printf("Enter your choice :");
    scanf("%d", &b);

    switch(a)
    {
      case 0: printf("Why is this function used ?");
      case 1: printf("");
              for (int i=0;i<5;i++)
               {
                  if (i>2)
                  {
                    return 0;
                  }else
                  {
                    return 1;
                  }     
                }
    }

    int max,min;

    /* Input two numbers from user */
    printf("Enter three numbers to find maximum: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2)
    {
      if(num1>num3)
      {
        max = num1;
      }
      else{
        max = num3;
      }
    }
    else{
      if (num2>num3)
      {
        max = num2;
      }
      else {
        max = num3;
      }
    }
    printf("Highest number is %d", max);
    return 0;
}
