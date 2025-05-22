#include<stdio.h>
int perfect(int n)
{
    int  i,sum=0 ;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum == n)
    {
        printf("yes perfect");
    }
    else
    {
        printf("no perfect");
    }
    return 1;
}
int main()
{
    perfect(28);
    return 0;
}