#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int l = 1; l <= n / 2; l++)
    {
        if (n % l == 0)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
