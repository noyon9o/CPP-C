#include<stdio.h>
int main()
{
    int n, police = 0, crime = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x>0)
        {
            police+=x;
        }else{
            if (police<1)
            {
                crime++;
            }else{
                --police;
            }
        }
    }
    printf("%d", crime);

    return 0;
}