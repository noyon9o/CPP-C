#include<stdio.h>

int main()
{
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(odd == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 != 0)
            {
                printf("%d\n", i+1);
            }
        }
    }
    if(even == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                printf("%d\n", i+1);
            }
        }
    }
    return 0;
}
