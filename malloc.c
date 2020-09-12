#include <stdio.h>

void* malloc (size_t size);

typedef struct Emp{
  int eno;
  char ename[20];
  float esal;
} employee;


int main(void) {
struct Emp* ptr;

//using malloc allocate memory to the structure
ptr = (struct Emp*)malloc(sizeof(struct Emp));
if (ptr == NULL)
{
  printf("out of memory\n");
}
else
{
  printf("Enter employee details : ");
  scanf("%d %s %f", &ptr->eno, &ptr->ename, &ptr->esal);

}
  return 0;
}
