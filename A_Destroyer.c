#include <stdio.h>
#include <stdbool.h>

#define N 1000000

int main()
{
    int cases;
    scanf("%d", &cases);

    while (cases--)
    {
        int n;
        scanf("%d", &n);

        int cnt[n + 1];
        for (int i = 0; i <= n; i++)
        {
            cnt[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            int d;
            scanf("%d", &d);
            if (d < n)
            {
                cnt[d]++;
            }
            else
            {
                cnt[n] = N;
            }
        }

        bool good = true;
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] > cnt[i - 1])
            {
                good = false;
                break;
            }
        }

        printf("%s\n", good ? "YES" : "NO");
    }

    return 0;
}