#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a;
        int negetive = 0;
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &a);
            negetive += (a == -1);
        }
        int answer = 0;
        while (negetive >n/2 || negetive%2 == 1)
        {
            negetive--;
            answer++;
        }
        printf("%d\n", answer);
    }
    return 0;
}