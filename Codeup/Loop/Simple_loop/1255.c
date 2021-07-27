#include<stdio.h>

int main() {
	double a = 0, b = 0,i;
	scanf("%lf %lf",&a,&b);
	for(i = a; i<=b; i+=0.01) {
		printf("%.2lf ",i);
	}
	return 0;
}
