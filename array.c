#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX],n,i;
    int num,count;
     
    printf("Enter total number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i< n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
     
    printf("Enter number to find Occurrence: ");
    scanf("%d",&num);
     
    //count occurance of num
    count=0;
    for(i=0;i< n;i++)
    {
        if(arr[i]==num)
            count++;
    }
    printf("Occurrence of %d is: %d\n",num,count);
    return 0;
}