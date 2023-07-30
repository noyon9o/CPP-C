#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m_c = 0, c_c = 0;
    while (n--)
    {
        int m, c;
        scanf("%d %d", &m, &c);
        
        if (m > c)
        {
            m_c++;
        }
        if(m < c)
        {
            c_c++;
        }
    }
    if (m_c > c_c)
    {
        printf("Mishka\n");
    }
    else if (m_c < c_c)
    {
        printf("Chris\n");
        
    }
    else
    {
        printf("Friendship is magic!^^\n");
    }
    return 0;
}