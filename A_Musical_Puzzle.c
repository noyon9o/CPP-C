#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
                cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
