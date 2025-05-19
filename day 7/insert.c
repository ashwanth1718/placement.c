#include<stdio.h>
int main()
{
    int i,n=5,num=100,pos=1;
    int a[]={1,3,80,78,0};
    for(i=5;i>pos;i--)
    {
        a[i]=a[i-1];  
        
    }
    a[i]=num;num++; 
    printf("insert an element:\n");
    for(i=0;i<n;i++)
    {
    printf("\n %d",a[i]);
    }
    return 0;
}







