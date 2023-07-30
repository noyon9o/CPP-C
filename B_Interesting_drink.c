#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int m, p;
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &p);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (p >= ar[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}