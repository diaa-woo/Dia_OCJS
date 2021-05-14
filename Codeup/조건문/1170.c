#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(c<10) printf("%d%d", a*100 + b*10 , c);
	else printf("%d", a*1000 + b*100 + c);
	return 0;
}
