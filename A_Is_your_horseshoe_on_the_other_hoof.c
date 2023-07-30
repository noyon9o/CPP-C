#include <stdio.h>

int main() {
    int s1, s2, s3, s4;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
    
    int colors[4] = {s1, s2, s3, s4};
    int distinct = 1;
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = i + 1; j < 4; j++) 
        {
            if (colors[i] == colors[j]) 
            {
                distinct--;
                break;
            }
        }
        distinct++;
    }
    
    printf("%d\n", 4 - distinct);
    
    return 0;
}
