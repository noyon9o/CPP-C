#include <stdio.h>
#include <stdbool.h>

#define ll long long int

int v[500], sz;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool almostPrime(int n) {
    int ct = 0;
    for (int i = 0; i < sz; i++) {
        if (n % v[i] == 0)
            ct++;
    }
    if (ct == 2)
        return true;
    return false;
}

bool solve() {
    int n;
    scanf("%d", &n);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (almostPrime(i))
            ans++;
    }
    printf("%d\n", ans);
    return true;
}

int main() {
    for (int i = 2; i <= 3000; i++) {
        if (isPrime(i))
            v[sz++] = i;
    }
    solve();
    return 0;
}
