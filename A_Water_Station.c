#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int nearestStation = (N + 4) / 5 * 5;
    printf("%d\n", nearestStation);

    return 0;
}
