#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, k, x;
        scanf("%d %d %d", &n, &k, &x);
        
        if (x != 1) {
            printf("YES\n");
            printf("%d\n", n);
            
            for (int i = 0; i < n; i++) {
                printf("1 ");
            }
            
            printf("\n");
        }
        else if (k == 1 || (k == 2 && n % 2 == 1)) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
            int count = n / 2;
            
            if (n % 2 == 1) {
                printf("3 ");
                count--;
            }
            
            while (count--) {
                printf("2 ");
            }
            
            printf("\n");
        }
    }
    
    return 0;
}
