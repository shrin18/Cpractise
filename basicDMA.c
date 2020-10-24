#include <stdio.h>
#include <stdlib.h>

int main() {
  int *iVar;
  char *cVar;
  float *fVar;

  iVar = (int*)malloc(1*sizeof(int));
  cVar = (char*)malloc(1*sizeof(char));
  fVar = (float*)malloc(1*sizeof(float));

  printf("Enter integer value\n");
  scanf("%d", iVar);

  printf("Enter an char value\n");
  scanf(" %c", cVar);

  printf("Enter a float value\n");
  scanf(" %f", fVar);

  printf("Inputted value are %d, %c, %f", *iVar, *cVar, *fVar);

  free(iVar);
  free(cVar);
  free(fVar);

  return 0;

}
