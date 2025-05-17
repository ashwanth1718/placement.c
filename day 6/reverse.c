#include<stdio.h>
int main()
{
    int a[3] = {1, 2, 3};
    for(int i = 2; i >= 0; i--)
    {
        printf("%d ", a[i]); 
    }
    return 0;
}
