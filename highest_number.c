#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

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
