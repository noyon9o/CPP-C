#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, a, b, ans = 0;
        scanf("%d", &n);
        for (int k = 0; k < n; k++)
        {
            scanf("%d %d", &a, &b);
            if (a > b)
            {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}