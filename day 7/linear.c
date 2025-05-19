
#include <stdio.h>
int main() 
{
    int i,k=9,found=0;
    int a[]={1,4,8,9,60};
    for(i=0;i<5;i++)
    {
        if(a[i]==k)
        {
            found =1;
            break;
        }
    }
    if(found)
    {
        printf(" yes variable found");
    }
    else
    {
        printf("no variable not found");
    }
    return 0;
}

