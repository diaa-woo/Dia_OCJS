#include<stdio.h>

int main() {
	int a = 0,b =0;
	scanf("%d",&a);
	if(a>0) {
		b = 1;
	}
	else if (a==0) {
		b = 2;
	}
	else {
		b = 3;
	}
	printf("%d", b);
	return 0;
}
