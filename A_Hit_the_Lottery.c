#include<stdio.h>
#include<windows.h>
int main()
{
    int a;
    scanf("%d", &a);

    int ans = a / 100;
    int left = a % 100;

    ans += left / 20;
    left = left % 20;

    ans += left / 10;
    left = left % 10;

    ans += left / 5;
    left = left % 5;

    ans += left / 1;
    left = left % 1;

    printf("%d", ans);

    return 0;
}