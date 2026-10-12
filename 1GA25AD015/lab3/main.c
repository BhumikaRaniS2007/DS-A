#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define SIZE 20
struct stack
{
    int top;
    int data[SIZE];
};
typrdef struct stack STACK;
void push(STACK *s,float item)
{
    s->data[++(s->top)]=item;
}
float pop(STACK *s)
{
     return s->data[(s->top)--];
}
float compute(float op1,symbol,op2)
{
    switch(symbol)
    {
        case '+': return op1+op2;
        case '-': return op1-op2;
        case '*': return op1*op2;
        case '/': return op1/op2;
        case '^': return ^(op1,op2);

    }
}
float eval_postfix(STACK *s,char postfix[])
{

}
