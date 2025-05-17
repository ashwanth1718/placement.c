#include<stdio.h>
int main()
{
    int min;
    int a[5]={1,2,3,59,100};
    min=a[0];
    for(int i=0;i>5;i++)
    {
        if(a[i] > min)
        {
            min=a[i];
        }
    }
    printf(" smallest num:%d \n",min);
    return 0;
}