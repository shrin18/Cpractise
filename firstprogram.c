#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  
  int i;
  int shri[5] = {1,3,5,7,9};
  char movie[100] = "Batman returns!";
  char movie3[20];

  char movie4[25];
  char * pmovie4 = movie4;

  char * pmovie3 = movie3;

  fgets(movie3, 25, stdin);
  puts(pmovie3);

  fgets(movie4, 30, stdin);
  puts(pmovie4);



  char * movie2 = "batman begins!";
  puts(movie);
  movie2 = "New movie!";

  printf("%s", movie);

  puts(movie2);

  for (i=0;i<5;i++)
  {
    printf("\nshri[%d] \t %p \t %d\n", i, &shri[i], shri[i]);
  }

  //Array pointer are reference to first element
  printf("\n shri \t\t %p \n", shri);

  //First element
  printf("\n *shri \t\t %d \n", *shri);

  //third element
  printf("\n *(shri+2) \t\t %d \n", *(shri+2));


  return 0;
}