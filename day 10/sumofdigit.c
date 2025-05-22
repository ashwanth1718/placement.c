#include<stdio.h>
int digit(int n)
{
    if(n==0)
    {
        return 0;
    }
        return (n%10)+digit(n/10);
}
int main()
{
    printf(" the sum of digit :%d",digit(123));
    return 0;
}