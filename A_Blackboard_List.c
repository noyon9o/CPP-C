#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; ++i)
    {
        int n;
        scanf("%d", &n);

        int mn = INT_MAX, mx = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            int x;
            scanf("%d", &x);

            if (x < mn)
                mn = x;

            if (x > mx)
                mx = x;
        }

        if (mn < 0)
            printf("%d\n", mn);
        else
            printf("%d\n", mx);
    }

    return 0;
}
