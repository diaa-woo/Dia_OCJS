#include<stdio.h>

void main() {
	int a = 0,b = 1;
	scanf("%d",&a);
	for(int i = a; i>0; i--) {
		b *= i;
	}
	printf("%d",b);
	return;
}
