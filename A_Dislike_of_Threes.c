#include<stdio.h>
int main()
{
    int ar[1001];
    int j = 1;
    for (int i = 1;i <= 1666; i++)
    {
        if (i%3 != 0)
        {
            if (i%10 != 3)
            {
                ar[j] = i;
                j++;
            }
        }
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k;
        scanf("%d", &k);
        printf("%d\n", ar[k]);
    }
    return 0;
}