#include <stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int minCost = (n / m) * b + (n % m) * a;
    if (n % m != 0) {
        int option2 = ((n / m) + 1) * b;
        minCost = (minCost < option2) ? minCost : option2;
    }
    int option3 = n * a;
    minCost = (minCost < option3) ? minCost : option3;

    printf("%d\n", minCost);

    return 0;
}

