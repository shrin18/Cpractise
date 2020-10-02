#include <stdio.h>

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
