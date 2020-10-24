#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

int arr[3][3][3]=
{ {{10,20,30},{40,50,60},{70,80,90}},
{{11,22,33},{44,55,66},{77,88,99}},
{{12,23,34},{45,56,67},{78,89,90}}
};
  printf("%d", arr[1][2][1]);

  int i ,j,k;
  int a[2][3][3];
  printf("Enter the values in the array: \n");
  for (i=1;i<=2;i++)
  {
    for (j=1;j<=3;j++)
    {
      for (k=1;k<=3;k++)
      {
        printf("The values at a[%d][%d][%d]:", i , j ,k);
        scanf("%d", &a[i][j][k]);
      }
    }
  }
  printf("printing the values in the array: \n");
  for(i=1;i<=2;i++)
  {
    for (j=1;j<=2;j++)
    {
      for (k=1;k<=2;k++)
      {
        printf("%d", arr[i][j][k]);
        if(k==3)
        {
          printf("\n");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
