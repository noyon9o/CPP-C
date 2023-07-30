#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);
    int* v = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        a[i] = v[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (v[i] != a[1]) {
            printf("%d\n", i + 1);
        }
    }
    free(v);
    free(a);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}
