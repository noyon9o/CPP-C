#include<stdio.h>
#include<stdbool.h>
void solve(){
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);
    int x, y;
    scanf("%d %d", &x, &y);
    bool caught = false;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if ((a + b+x +y) % 2 ==0)
        {
            caught = true;
        }
    }
    if (caught)
    {
        printf("NO\n");
    }
    else
        printf("YES\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}