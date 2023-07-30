#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int n, count[2] = {0};
        scanf("%d", &n);
        for (int i = 1, x; i < n*2; i++)
        {
            scanf("%d %d",x, count[x%2]++);
        }
        if (count[0] == n)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}