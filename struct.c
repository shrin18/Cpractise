#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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

  

  position path[] = {{1,9},{3,4},{5,6},{4,6}};

  int size = 3;
  for (int i=0; i<size;i++)
  {
    printf("\n %d\t %d \n\n", path[i].x, path[i].y);
  }

  buildingplan *structpointer = &mybuilding;
  printf("Position x: %d\n\n", structpointer->position.x);

return 0;
}