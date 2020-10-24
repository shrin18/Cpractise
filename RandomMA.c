#include <stdio.h>
#include <stdlib.h>


int main(void) {
char *str;

str = (char *) malloc(45);

strcpy(str, "Computers are very useful");
printf("string = %s, Address = %u\n", str, str);

//Reallocating the memory
str = (char*) realloc(str, 38);
strcat(str, "They can do complex computations much faster than a human");
printf("String = %s, Address = %u\n", str, str);

free(str);
return 0;
}
