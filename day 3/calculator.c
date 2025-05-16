#include<stdio.h>
int main()
{
    int a=2, b=5  ;
    char op;
    printf("Enter your opertor:");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
    printf("result=%d\n",a+b);
    break;
    case '-':
    printf("result=%d\n",a-b);
    break;
    case '*':
    printf("result=%d\n",a*b);
    break;
    default:
    printf("invalid opertor\n");
    }
    return 0;
}