#include <stdio.h>

int main(void) {
	int t, x, y, sub;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d %d", &x, &y);
	    sub = x - y;
	    printf("%d\n", sub);
	}
	return 0;
}