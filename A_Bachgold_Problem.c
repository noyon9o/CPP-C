#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", n / 2);

    for (int i = 0; i < n / 2; i++) {
        printf("2 ");
    }

    if (n % 2 != 0) {
        printf("3");
    }

    return 0;
}
