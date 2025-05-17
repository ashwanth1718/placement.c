#include<stdio.h>
int main()
{
    int n,rev=0,real;
    printf("enetr a number:");
    scanf("%d",&n);
    real=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("reverse number is: %d \n ",rev);
    if(real==rev)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf(" the number is not a palindrome");
    }
    return 0;
    }
    