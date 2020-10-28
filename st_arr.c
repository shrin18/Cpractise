#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_LENGTH 5
#define EMPTY_STACK (-1)

int mystack[STACK_LENGTH];
int top = EMPTY_STACK;

int push(int value)
{
    if (top >= STACK_LENGTH-1) return false;
    top++;
    mystack[top] = value;
    return true;
}

int pop()
{
    if(top == EMPTY_STACK) return INT_MIN;
    else
    {
        int result = mystack[top];
        top--;
        return result;
    }
    }

int main(){
    push(56);
    push(52);
    
    int t;
    while ((t=pop())!=INT_MIN)
    {
        printf("t = %d\n", t);
    }
}