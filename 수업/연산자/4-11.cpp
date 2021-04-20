#include<stdio.h>

int main () {
	double a = 0;
	scanf("%lf",&a);
	a = a*10; //23.56 -> 235.6
	a = a + 0.5; //236.1
	a = (int)a; //236
	a = a/10; //23.6
	printf("%lf",a);
	return 0;
}
