#include<stdio.h>
int prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
          return 0;
        }
    }
    return 1;
}
int main()
{
    if (prime(31))
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}

