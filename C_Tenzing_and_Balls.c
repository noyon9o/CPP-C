#include<stdio.h>
#include<stdlib.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        const int N = 200000 + 5;
        int n, a[N], dp[N], buc[N];
        scanf("%d", &n);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) buc[i] = 0x3f3f3f3f;
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            if (dp[i - 1] + 1 < buc[a[i]]) {
                dp[i] = dp[i - 1] + 1;
            } else {
                dp[i] = buc[a[i]];
            }

            if (buc[a[i]] < dp[i - 1]) {
                buc[a[i]] = buc[a[i]];
            } else {
                buc[a[i]] = dp[i - 1];
            }
        }
        printf("%d\n", n-dp[n]);
    }
    return 0;
}