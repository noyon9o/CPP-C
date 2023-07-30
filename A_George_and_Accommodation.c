#include<stdio.h>
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (b-a>=2)
        {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}