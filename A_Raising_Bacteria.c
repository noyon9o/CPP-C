#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int count = 0;
    while (x > 0)
    {
        count += x & 1;
        x /= 2;
    }

    printf("%d\n", count);
    return 0;
}
