#include<stdio.h>
#include<string.h>
int main()
{
    int n, fst, snd, trd;
    int count = 0;
    scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &fst, &snd, &trd);

            if (fst+snd+trd >= 2)
            {
                count++;
            }
            
        }
        printf("%d\n", count);
    return 0;
}