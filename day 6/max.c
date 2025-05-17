#include<stdio.h>
int main()
{
    int max;
    int a[5]={1,2,3,59,100};
    max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i] > max)
        {
            max=a[i];
        }
    }
    printf(" largest num:%d \n",max);
    return 0;
}