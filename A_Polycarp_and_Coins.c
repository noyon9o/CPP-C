#include<stdio.h>
int main()
{
    int t;scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int c1, c2, c3;
        c1 = n;
        c2 = c1;
        if (n%3 == 1)
        {
            c1 += 1;
        }
        else if (n % 3 == 2)
        {
            c2 += 1;
        }
        printf("%d %d\n", c1, c2);
    }
    return 0;
}