#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int height = 0, count = 0;
    for (int i = 1; count <= n; i++) {
        count += i * (i + 1) / 2;
        if (count <= n) {
            height++;
        }
    }

    printf("%", height);
    return 0;
}