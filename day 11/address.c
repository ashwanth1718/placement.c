#include<stdio.h>
int main()
{
    int a=5;
    int *p=&a;
    printf("address of a:%p",(void*)p);
    return 0;
}