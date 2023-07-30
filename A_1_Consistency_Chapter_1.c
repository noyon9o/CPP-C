#include<stdio.h>
#include<string.h>
int main()
{
	int t, count = 0;
	scanf("%d", &t);
	char s[100];
	for(int i = 1; i <= t; i++)
	{
		scanf("%s", s);
		for(int j = 0; j < strlen(s); j++)
		{
			if(s[j] >= 'a' || s[j] >= 'A' && s[j] >= 'z' || s[j] >= 'Z')
			{
				count++;
			}
			
		}
		printf("Case #%d: %d\n", i, count-1);
	}
	return 0;
}