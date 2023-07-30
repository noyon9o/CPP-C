#include <stdio.h>

int main() 
{
    int n, i, j, max_index, min_index, time = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    max_index = 0;
    min_index = n - 1;
    for (i = 0; i < n; i++) 
    {
        if (a[i] > a[max_index]) 
        {
            max_index = i;
        }
        if (a[i] <= a[min_index]) 
        {
            min_index = i;
        }
    }
    time += max_index;
    time += n - 1 - min_index;
    if (max_index > min_index) 
    {
        time--;
    }
    printf("%d\n", time);
    return 0;
}
