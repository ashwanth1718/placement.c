#include<stdio.h>
void Fibo(int n, int a, int b, int count) {
    if (count >= n) {
        return;
    }
    printf("%d ", a);
    Fibo(n, b, a + b, count + 1);
}
int main()
{
    Fibo(5,0,1,0);
    return 0;
}
