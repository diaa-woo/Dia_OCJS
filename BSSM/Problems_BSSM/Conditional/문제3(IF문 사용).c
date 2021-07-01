#include <stdio.h>

void Rec(int max, int a, int b) {
	if(max <= (a+b)) {
		printf("yes");
	}
	else {
		printf("no");
	}
}

void main() {
	int a,b,c,max;
	scanf("%d %d %d", &a,&b,&c);
	max = a;
	if(b>max) max = b;
	if(c>max) max = c;
	if(max == a) {
		Rec(max, b, c);
	}
	else if(max == b) {
		Rec(max, a, c);
	}
	else {
		Rec(max, a, b);
	}
}
