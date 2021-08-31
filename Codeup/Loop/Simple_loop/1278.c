#include<stdio.h>

void main() {
	int a = 0,b = 0;
	double af = 0;
	scanf("%d",&a);
	af = a;
	for(int i = 0; i<100;i++) {
		af /= 10;
		b++;
		if(af<1) break;
	}
	printf("%d",b);
	return;
}
