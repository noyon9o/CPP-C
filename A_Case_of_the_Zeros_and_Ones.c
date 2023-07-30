#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);

    int coun_1 = 0, count_0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            coun_1++;
        }
        if (s[i] == '0')
        {
            count_0++;
        }
    }
    if (coun_1 > count_0)
    {
        printf("%d", coun_1 - count_0);
    }
    else if (coun_1 == count_0)
    {
        printf("0");
    }
    else if (count_0 > coun_1)
    {
        printf("%d", count_0 - coun_1);
    }
    
    return 0;
}
