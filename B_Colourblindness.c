#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        char row1[n + 1];
        char row2[n + 1];
        
        scanf("%s", row1);
        scanf("%s", row2);
        
        int same = 1; // Flag to track if rows are considered the same
        
        for (int i = 0; i < n; i++)
        {
            if (row1[i] != row2[i] && row1[i] != 'R' && row2[i] != 'R')
            {
                same = 0;
                break;
            }
        }
        
        if (same)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}
