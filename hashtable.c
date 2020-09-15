#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
  char name[MAX_NAME];
  int age;
}person;

person *hash_table[TABLE_SIZE];

unsigned int hash(char *name)
{
  int length = strnlen(name, MAX_NAME);
  unsigned int hash_value = 0;
  for (int i=0; i<length; i++)
  {
    hash_value += name[i];
    hash_value = hash_value * name[i] % TABLE_SIZE;
  }
  return hash_value;
}

void init_hash_table(){
  for(int i=0;i<TABLE_SIZE;i++)
  {
    hash_table[i] = NULL;
  }
}

void print_table(){
  for(int i=0;i<TABLE_SIZE;i++)
  {
    if (hash_table[i] == NULL)
    {
      printf("\t%i\t-----\n",i);
    }else{
      printf("\t%i\t%s\n",i, hash_table[i]->name);
    }
  }
}

bool hash_table_insert(person *p)
{
  if (p == NULL) return false;
  int index = hash(p->name);
  {
    if (hash_table[index] != NULL)
    {
      return false;
  } 
  hash_table[index] = p;
  return true;
}}

int main(void) {
  

init_hash_table();

person shrinish = {.name = "Shrinish", .age  =24};
person heramb = {.name = "Heramb", .age  = 54};
person nishita = {.name = "nishita", .age  = 50};
person vedashri = {.name = "Vedashri ", .age  = 22};
/*  printf("Shrinish => %u\n", hash("Shrinish"));

  printf("Donde => %u\n", hash("Donde"));  
  
  printf("Heramb => %u\n", hash("Heramb"));
*/

hash_table_insert(&shrinish);
hash_table_insert(&vedashri);
hash_table_insert(&nishita);
hash_table_insert(&heramb);

print_table();

  return 0;
}
