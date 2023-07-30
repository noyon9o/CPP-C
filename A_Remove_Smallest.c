#include <stdio.h>
#include <stdbool.h>
void sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        sort(a, n);
        bool ok = true;
        for (int i = 1; i < n; ++i)
        {
            ok &= (a[i] - a[i - 1] <= 1);
        }
        if (ok)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
