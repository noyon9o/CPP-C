#include <stdio.h>
#include <stdbool.h>

bool ISO(int flag[][100], int n, int m) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (flag[i][j] == flag[i - 1][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int flag[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &flag[i][j]);
        }
    }

    bool Standard = ISO(flag, n, m);
    if (Standard) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
