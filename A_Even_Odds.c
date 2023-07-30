#include<stdio.h>
int main()
{
    long long int n, k, a, b;
    scanf("%lld %lld", &n, &k);
    a = k * 2 - 1;
    a == 5;
    if (a>n)
    {
        if (n%2 == 0)
        {
            b = n / 2;
        }
        else
        {
            b = n / 2 + 1;
        }
        k = k - b;
        b = k*2;
        printf("%lld", b);
    }
    else
    {
        printf("%lld", a);
    }
    return 0;
}