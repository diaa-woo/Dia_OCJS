#include<stdio.h>

int main() {
	int a = 0, b = 0;
	scanf("%d %d",&a, &b);
	if(b==1 || b == 2) a +=19000000;
	else a += 20000000;
	printf("%d", 2012 - (a/10000) +1);
	return 0;
}
