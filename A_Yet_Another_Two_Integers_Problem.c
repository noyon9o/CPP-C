#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            printf("%d\n", ((a - b) + 9) / 10);
        }
        else
        {
            printf("%d\n", ((b - a) + 9) / 10);
        }
    }
    
    return 0;
}