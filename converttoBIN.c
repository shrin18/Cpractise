#include <stdio.h>
#include <stdlib.h>
#define NUM_BITS 8

int main()
{
  char *my_string;
  int input_int, args_assigned;
  int nbytes = 100;
  short my_short, bit;
  int idx;

  short MASK = 0x80;
  args_assigned = 0;
  input_int = -1;

  while ((args_assigned != 1) || (input_int < 0) || (input_int > 128))
  {
    puts ("Please put an integer between 0 and 128");
    my_string = (char*)malloc(nbytes + 1);
    getline(&my_string, &nbytes, stdin);

    args_assigned = sscanf(my_string,"%d", &input_int);
    if ((args_assigned != 1) || (input_int < 0) || (input_int < 128))
    puts("\n Invalid input!");

    my_short = (short)input_int;
    printf("Binary value");

    for(idx = 0; idx < NUM_BITS; idx ++)
    {
      bit = my_short & MASK;
      printf("%d", bit/MASK);
      my_short <<=1;
    }

    printf("\n");
    return 0;
  }
}
