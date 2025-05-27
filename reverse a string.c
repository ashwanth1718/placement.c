#include<stdio.h>
int main()
{
    
    int a[]={1,2,3,4,5};
    int *st=a;
    int *ed=a+4;
    int c;
        while(st<ed)
        {
            c=*st;
            *st=*ed;
            *ed=c;
            st++;
            ed--;
        }
        printf("MODIFIED ARRAY :\n");
        for(int i=0;i<5;i++)
        printf("%d\t",a[i]);
        return 0;
}