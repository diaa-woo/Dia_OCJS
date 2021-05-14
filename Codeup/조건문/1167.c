#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if((a>=b && b>=c)||(c>=b && b>=a)) printf("%d", b);
	else if((b>=a && a>=c )|| (a>=b && c>=a)) printf("%d", a);
	else printf("%d", c);
	return 0;
}
