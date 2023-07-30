#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &arr[i]);
        }

        int maxBlank = 0;
        int currentBlank = 0;

        for (int i = 0; i < n; i++) 
        {
            if (arr[i] == 0) 
            {
                currentBlank++;
            } 
            else 
            {
                if (currentBlank > maxBlank) 
                {
                    maxBlank = currentBlank;
                }
                currentBlank = 0;
            }
        }

        if (currentBlank > maxBlank) 
        {
            maxBlank = currentBlank;
        }
        printf("%d\n", maxBlank);
    }

    return 0;
}
