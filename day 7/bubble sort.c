#include<stdio.h>
int main()
{
    int i,j,d; 
    int a[]={1,3,80,78,0};
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    }
    printf("Buble sort min to max : ");
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}