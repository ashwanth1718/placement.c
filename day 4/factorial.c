#include <stdio.h>
int main() 
{
    int n,a=1;
    printf("enter the number:");
    scanf("%d",&n);   
    for(int i=1;i<=n;i++)
    {
     a*=i;
     printf("%d \n",a);
    }

    return 0;
}