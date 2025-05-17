#include <stdio.h>
int main() 
{
    int n,prime=1;
    printf(" enter the number:");
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
            
        }
    }
    if(prime)
    {
        printf(" number is prime \n");
    }
    else
    {
        printf(" number is not a prime \n");
    }

    return 0;
}
