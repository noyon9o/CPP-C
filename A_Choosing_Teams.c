#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < 5)
        {
            if (5-ar[i] >= k)
            {
                count++;
            }
        }
    }
    if(count>= 3)
    {
        printf("%d", count/3);
    }
    else
    {
        printf("0");
    }
    return 0;
}