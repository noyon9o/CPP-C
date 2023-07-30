#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[b];
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int count = arr[0]-1;
    for (int i = 0; i < b-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            /* code */
            count += a - (arr[i] - arr[i+1]);
        }
        else if (arr[i] < arr[i+1])
        {
            count += arr[i+1] - arr[i];
        }
    }
    printf("%lld", count);
    return 0;
}