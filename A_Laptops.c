#include <stdio.h>

int main()
{
    int i, x, y, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        if (x != y)
        {
            printf("Happy Alex\n");
            return 0;
        }
    }

    printf("Poor Alex\n");
    return 0;
}
// NOYON