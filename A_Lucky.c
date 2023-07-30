#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);

        int last = n % 10;
        n = n / 10;
        int last2 = n % 10;
        n = n / 10;
        int last3 = n % 10;

        int sum = last + last2 + last3;

        n = n / 10;
        int fast2 = n % 10;
        n = n / 10;
        int fast = n % 10;
        n = n / 10;
        int fast3 = n % 10;

        int sum2 = fast + fast2 + fast3;

        if (sum == sum2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    // printf("%d %d %d", fast, fast2, fast3);

    return 0;
}