#include <stdio.h>
int main()
{
    int  i,n=5,pos=2;
     int a[]={1,3,80,78,0};
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("After deletion : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}

