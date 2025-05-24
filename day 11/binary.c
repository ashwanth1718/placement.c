#include<stdio.h>
int binary(int n)
{
    if(n==0)
    return 0 ;
    binary  (n/2);
    printf("%d",n%2);
}
int main()
{
    binary(10);
    return 0;
}