#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}

int mult(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    return a/b;
}

int sub(int a,int b)
{
    return a-b;
}

int main()
{
    printf("ADD :%d\n",add(4,1));
    printf("MULT :%d\n",mult(5,5));
    printf("DIV :%d\n",div(10,10));
    printf("SUB :%d\n",sub(10,5));
    return 0;
}