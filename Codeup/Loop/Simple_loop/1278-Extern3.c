#include <stdio.h>

int main()
{
	int n, i, cnt;
	char s[99];
	
	scanf("%d", &n);
	cnt = sprintf(s, "%d", n);
	printf("%d", cnt );
	return 0;
}
