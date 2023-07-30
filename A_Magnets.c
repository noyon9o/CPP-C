#include<stdio.h>
#include<string.h>
int main()
{
    int n, ans = 1;
    char a[3], b[3];
    scanf("%d", &n);
    scanf("%s", a);
    for (int i = 1; i < n; i++)
    {
        /* code */
        scanf("%s", b);
        if (a[0] != b[0])
        ans++;
        strcpy(a, b);
    }
    printf("%d", ans);
    return 0;
}