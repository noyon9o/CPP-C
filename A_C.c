#include <stdio.h>

int solve(int a, int b, int n) {
    int count = 0;
    
    while (a <= n && b <= n) {
        if (a < b)
            a += b;
        else
            b += a;
        
        count++;
    }
    
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);
        
        int result = solve(a, b, n);
        printf("%d\n", result);
    }
    
    return 0;
}
