#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ar1[5000];
    int ar2[5000];
    int ar3[5000];
    int n1 = 0, n2 = 0, n3 = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 1)
        {
            ar1[n1] = i;
            n1++;
        }
        else if (x == 2)
        {
            ar2[n2] = i;
            n2++;
        }
        else if (x == 3)
        {
            ar3[n3] = i;
            n3++;
        }
    }
    int teams;

    if (n1 < n2 && n1 < n3) {
        teams = n1;
    } else if (n2 < n1 && n2 < n3) {
        teams = n2;
    } else {
        teams = n3;
    }

    printf("%d\n", teams);
    if (teams > 0)
    {
        for (int i = 0; i < teams; i++)
        {
            printf("%d %d %d\n", ar1[i], ar2[i], ar3[i]);
        }
    }
    
    return 0;
}
