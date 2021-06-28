#include<stdio.h>

int main() {
	int a = 0,b = 0,c = 0;
	double ave = 0;
	scanf("%d %d %d", &a, &b, &c);
	ave = (a+b+c)/3.0;
	ave = ave * 100;
	ave = ave + 0.5;
	ave = (int)ave;
	ave = ave/100;
	printf("%f\n",ave);
	return 0;
}
