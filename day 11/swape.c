#include<stdio.h>
int main()
{
    int a=10,b=5;
    int *p=&a;
    int *q=&b;
    int n= *p;
        *p=*q;
        *q=n;
        printf(" swape value:\n");
        printf("a=%d\n",a);
        printf("b=%d\n",b);
        return 0;
}