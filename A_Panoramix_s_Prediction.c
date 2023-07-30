#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m); // Input: n and m

    int nextPrime = n + 1;
    while (!isPrime(nextPrime))
    {
        nextPrime++;
    }

    if (nextPrime == m)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
