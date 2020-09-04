#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void function(int *z, int *v)
  {
    *z = 20;
    *v = 10;
  }
 
  union abc {
      int a;
      char b;
      double c;
      float d;

  };

typedef struct
{
  int length;
  int width;
} rectangle;

typedef struct
{
  int x;
  int y;
} position;

typedef struct 
{
  char owner[30];
  rectangle rectangle;
  position position;

} buildingplan;

int main(void) {

  rectangle myrectangle = {5,10};
  printf(" Length is %d \n Width is %d \n\n", myrectangle.length, myrectangle.width);
  
  buildingplan mybuilding = {"Shrinish", {10,5}, {22,98}};

  printf("The house at %d %d (size %d %d) is owned by %s \n", mybuilding.position.x,
       mybuilding.position.y,
       mybuilding.rectangle.length,mybuilding.rectangle.width, 
       mybuilding.owner);

  printf("\n \t Size of Union abc %ld\n ", sizeof(union abc));

  union abc var;
  var.a = 90;
  union abc *p = &var;
  printf ("\n Union abc gives the values %d %c %f \n", p->a, p->b, p->c);

  position path[] = {{1,9},{3,4},{5,6},{4,6}};

  int size = 3;
  for (int i=0; i<size;i++)
  {
    printf("\n %d\t %d \n\n", path[i].x, path[i].y);
  }

  buildingplan *structpointer = &mybuilding;
  printf("Position x: %d\n\n", structpointer->position.x);

  int a = 8;
  int b = 18;
  function(&a,&b);

return 0;
}
