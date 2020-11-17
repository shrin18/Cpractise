#include <stdio.h>

//function pointers
volatile unsigned int z;

typedef int (*operation_ptr)(int,int);

int * (*foo) (int,int,int);
int add(int a,int b){return a+b;}
int mult(int a,int b){return a*b;}

int do_operation(int (*op) (int,int), int x, int y)
{
    return op(x,y);
}

int main(int argc, char **argv){

    int result = do_operation(add,5,34);
    int result2 = do_operation(mult, 4,5);

    //lets do array pointer
    int num[5];
    int *ptr = num; //pointer to itslef &num[0]

    int v = 2;
    for(;ptr<&num[5];ptr++)
    {
        *ptr = v;
        v = v*2;
    }

    for(int i=0; i<5; i++)
    {
        printf(" %d\n", num[i]);
    }

    int x = 7;
    printf("x is %d\n", x);

    int y = 14;
    printf("y is %d\n", y);

    int *aptr = &x;
    int *bptr = &y;

    printf("a ptr is %x\n", aptr);
    printf("b ptr is %x\n", bptr);

    printf("x is %d\n\t", *aptr );
    printf("y is %d\n\t", *bptr );

    *aptr = 45;
    printf("x is %d\n\t", *aptr );
    
}