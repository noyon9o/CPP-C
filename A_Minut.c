#include <stdio.h>
int main()
{
    int ara[15];
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = i+1; j < 15; j++)
        {
            if (ara[i] > ara[j])
            {
                int temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    int low_indx = 0;
    int high_indx = 15;
    int mid_indx;
    int num;
    scanf("%d", &num);
    while (low_indx <= high_indx)
    {
        mid_indx = (low_indx + high_indx) / 2;
        if (num == ara[mid_indx])
        {
            break;
        }
        if (num < ara[mid_indx])
        {
            high_indx = mid_indx - 1;
        }
        else
        {
            low_indx = mid_indx + 1;
        }
    }
    if (low_indx > high_indx)
    {
        printf("%d is not in the array\n", num);
    }
    else
    {
 printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx+1); 
    }
    return 0;
}