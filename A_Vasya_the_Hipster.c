#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d ", b);
        printf("%d", (a - b) / 2);
    }
    if (a < b)
    {
        printf("%d ", a);
        printf("%d", (b - a) / 2);
    }
    if (a == b)
    {
        printf("%d ", a);
        printf("0");
    }
    return 0;
}