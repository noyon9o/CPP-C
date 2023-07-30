#include<stdio.h>
int main()
{
    int x, k, i, count = 0;
    scanf("%d %d", &x, &k);
    int n[x];
    for (i = 0; i < x; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i = 0; i < x; i++)
    {
        if (n[i] > 0 && n[i] >= n[k-1])
        {
            count++;
        }
    }
    printf("%d\n", count);
    
    return 0;
}
