#include <stdio.h>

int main() {
	int a,b,c, max = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && a==c && b==c) printf("%d",10000+a*1000);
	else if(a==b) printf("%d", 1000+a*100);
	else if(a==c) printf("%d", 1000+a*100);
	else if(c==b) printf("%d", 1000+b*100);
	else {
		max = a;
		if(max < b) max = b;
		if(max < c) max = c;
		printf("%d", max*100);
	}
	return 0;
}
