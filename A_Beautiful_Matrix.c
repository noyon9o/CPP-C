#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[6][6], i, j, r, c;
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {
            /* code */
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                /* code */
                r =abs(3-i);
                c =abs(3-j);
                printf("%d", r+c);
            }
        }
    }
    return 0;
}