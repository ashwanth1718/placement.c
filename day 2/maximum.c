#include<stdio.h>
int main()
{ 
    int  a,b;
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is maximum",a);
    }
    if (b>a)
    {
         printf("%d is maximum",b);
    }
    if(a==b)
    {
         printf("both are equal");
    }
    return 0;
}