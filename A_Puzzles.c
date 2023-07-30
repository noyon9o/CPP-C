#include <stdio.h>
#include <string.h>

int main()
{
    int st, n;
    scanf("%d %d", &st, &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (ar[j] > ar[j+1])
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    int min_diff = ar[n-1] - ar[0];

    for (int i = 0; i <= n-st; i++)
    {
        int current_diff = ar[i+st-1] - ar[i];
        if (current_diff < min_diff)
        {
            min_diff = current_diff;
        }
    }

    printf("%d", min_diff);

    return 0;
}
