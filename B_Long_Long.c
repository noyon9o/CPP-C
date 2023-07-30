#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        int sum = 0;
        int cnt = 0;
        bool open = false;

        for (int j = 0; j < n; j++) {
            sum += abs(a[j]);
            if (a[j] < 0 && !open) {
                open = true;
                cnt += 1;
            }
            if (a[j] > 0) {
                open = false;
            }
        }

        printf("%d %d\n", sum, cnt);
    }

    return 0;
}
