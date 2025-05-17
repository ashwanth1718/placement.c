#include<stdio.h>
int main()
{
    int a=5,i,j;
    for(  i=a-1;i>=0;i--)
    {
        for( j=0;j<=i;j++)
        {
            printf("* \t ");
        }
        printf("\n ");
    }
    return 0;
}