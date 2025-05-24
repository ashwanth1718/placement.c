#include<stdio.h>
int main()
{
    int a=10,b=5;
    int *pa;
    int *pb;
    pa=&a;
    pb=&b;
    int sum =*pa+*pb;
        printf("sum of value:%d \n",sum);
       
        return 0;
}