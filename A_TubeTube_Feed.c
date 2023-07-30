#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int n, t;
        scanf("%d %d", &n, &t);
        int video[n], entvalue[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &video[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &entvalue[i]);
        }
        int bst = -2;
        for (int i = 0; i < n; i++)
        {
            if (i + video[i] <= t && (bst == -2 || entvalue[bst] < entvalue[i]))
            bst = i;
            
        }
        printf("%d\n", bst+1);
    }
    return 0;
}


