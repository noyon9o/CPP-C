#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int j = 0; j < t; j++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int l = 0, h = n, ans = -1;
        while (l <= h) {
            int mid = (l + h) / 2;
            int count = 0;
            for (int i = 0; i < n; i++) {
                if ((i < mid && ar[i] <= count) || (i >= mid && ar[i] > count)) {
                    count++;
                }
            }
            if (count == mid) {
                ans = mid;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        printf("%d\n", ans);
    }
    
    return 0;
}