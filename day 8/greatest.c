#include<stdio.h>
int greatest(int a,int b,int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    else if (b>=a && b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    printf(" greatest value :%d",greatest(1,2,3));
    return 0;
}