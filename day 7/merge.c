#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    int c[10];
    int i,j=0;
    for(i=0;i<5;i++)
    {
        c[j++]=a[i];
    }
    for(i=0;i<5;i++)
    {
        c[j++]=b[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d \t",c[i]);
    }
    return 0;
}