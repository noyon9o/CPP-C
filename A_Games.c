#include <stdio.h>
 
int main() {
    int t, count =0;
    scanf("%d", &t);
    int x[t], y[t];
    for(int i =0; i < t; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    for(int i=0; i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
            if(x[i]==y[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
