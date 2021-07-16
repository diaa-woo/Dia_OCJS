#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a>170 && b>170 && c>170) printf("PASS");
	else printf("CRASH");
	return 0;
}
