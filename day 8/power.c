#include<stdio.h>
int power(int a ,int n)
{
    int pow=1;
    for(int i=0;i<n;i++)
    {
        pow*=a;
    }
    return pow;
}
int main()
{
    printf("power of value: %d\n",power(12,2));
    return 0;
}