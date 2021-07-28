#include<stdio.h>

void main() {
	int a = 0,b = 0;
	scanf("%d",&a);
	for(int i = 0; i<100;i++) {
		a /= 10;
		b++;
		if(a/10<=9) break;
	}
	printf("%d",b);
}
