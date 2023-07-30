#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int remain_time = 240 - k;

    int count_pb_time = 0;
    int count  = 0;
    for (int i = 1; i <= n; i++)
    {
        count_pb_time += 5*i;
        if (count_pb_time+k <= 240)
        {
            count++;
        }
    }
    


    printf("%d", count);

    return 0;
}