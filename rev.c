#include<stdio.h>
int main()
{
    int a[]={12,23,45,56,43};
    int *p=a;
    for(int i=4;i>=0;i--)
    printf("%d\t",*(p+i));
    
    return 0;
}