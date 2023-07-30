// OJ: dimikoj.com-03 | Date: 18 January, 2021 | Author: Shihab Mahamud

#include <stdio.h>

int main()
{
    int t, n;
    long long fact = 1;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            fact = fact * j;
            fact = fact;
        }
        printf("%lld\n", fact);
    }
    return 0;
}
