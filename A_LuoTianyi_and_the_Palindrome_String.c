#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char s[51];
        scanf("%s", s);
        
        int len = strlen(s);
        int result = (len > 1) ? len : -1;
        printf("%d\n", result);
    }
    
    return 0;
}


