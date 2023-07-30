#include <stdio.h>
#include <stdlib.h>

void solve()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n / 2; i++)
    {
        ans += a[n - i - 1] - a[i];
    }
    printf("%d\n", ans);
    free(a);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
