#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] > mx)
        {
            mx = ar[i];
        }
        
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (mx - ar[i]);
    }
    printf("%d\n", sum);

    
    return 0;
}
