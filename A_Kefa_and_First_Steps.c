#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    int length = 1;
    int max_length = 1;
    for (int i = 1; i < n; i++) 
    {
        if (a[i] <= a[i+1]) 
        {
            length++;
        } 
        else 
        {
            length = 1;
        }
        if (length > max_length) 
        {
            max_length = length;
        }
    }
    printf("%d\n", max_length);
    return 0;
}