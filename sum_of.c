#include<stdio.h>
int main()
{
    int t, num, reminder, div, rem;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &num);
        reminder = num % 10;
        for (int j = 1; j <= 5; j++)
        {
            div = num / 10;
            num = div;
            for (int k = num; k >= 1; k--)
            {
                rem = num % 10;
            }
        }
        printf("Sum = %d\n",rem + reminder);
    }
    return 0;
}