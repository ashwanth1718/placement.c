#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &i);
    printf("Multiplication table of %d:\n", i);
    for (n = 1; n <= 10; n++) {
        printf("%d * %d = %d\n", n, i, i * n);
    }
    return 0;
}