#include<stdio.h>
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
int main()

{
    printf("GCD VALUE :%d\n",GCD(12,18));
    return 0;
}