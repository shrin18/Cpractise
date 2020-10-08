#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>


struct counters {
  unsigned int little: 2;
  unsigned int medium: 4;
  unsigned int large: 6;
};

#define NUM_LOOPS 50

int main(void) {
  struct counters counts;
  counts.little = 0;
  counts.medium = 0;
  counts.large = 0;

  for (int i=0; i < NUM_LOOPS; i++)
  {
    counts.little++;
    counts.medium++;
    counts.large++;
    printf("%d, %d, %d\n", counts.little, counts.medium, counts.large);
  }

  printf("Sizeof counts = %lu\n", sizeof(counts));


  return 0;
}
