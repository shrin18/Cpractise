#include <stdio.h>
#include <stdlib.h>

//student struct using DMA
struct student{
  char name[30];
  int roll;
  float perc;
};

int main() {
 struct student *pstd;
 int n,i;

 printf("Enter the total number of elements");
 scanf("%d", &n);

 pstd = (struct student*)malloc(1*sizeof(struct student));

 for (i=0;i<n;i++)
 {
   printf("\nEnter the details of student[%3d]:\n", i+1);
   printf("Enter the name");
   scanf(" ");
   gets((pstd+i)->name);

   printf("Enter the roll number");
   scanf("%d", &(pstd+i)->roll);

   printf("Enter the percentage");
   scanf("%f", &(pstd+i)->perc);

 }

 printf("\nEntered details are \n");
 for(i=0;i<n;i++)
 {
   printf("%30s \t %5d \t %.2f\n", (pstd+i)->name, (pstd+i)->roll, (pstd+i)->perc);
 }

 if(pstd == NULL)
 {
   printf("Insufficient memory, exiting...");
   return 0;
 }

 printf("Enter name");
 gets(pstd->name);

 printf("Enter roll number");
 gets("%d", &pstd->roll);
 
 printf("Enter percentage");
 gets("%f", &pstd->perc);

 printf("Entered details are as follows");
 printf("Name: %s, Roll no.: %d, percentage: %.2f", pstd->name, pstd->roll, pstd->perc);


 
 //Input and print text using DMA
 char *text;

 printf("Enter the limit of the text  ");
 scanf("%d", &n);

 //allocate memory dynamically
 text = (char*)malloc(n*sizeof(char));

 printf("Enter text ");
 scanf(" ");
 gets(text);

 printf("Input text is %s", text);

 free(text);

 //1D array DMA
 int *arr;
 int limit;
 int sum = 0;

 printf("Enter total number of elements");
 scanf("%d", &limit);

 arr = (int*)malloc(limit*sizeof(int));

 if (arr == NULL)
 {
   printf("Insufficient memory, exiting....");
   return 0;
 }

 printf("Array elements are as follows");
 for (int i=0; i<limit; i++)
 {
   printf("%3d ", *(arr+i));
 }

 printf("\nSum of all elements: %d\n", sum);
 


}
