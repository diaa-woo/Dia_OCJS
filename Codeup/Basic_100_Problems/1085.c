#include<stdio.h>

int main() {
	long long int h = 0,b = 0,c = 0,s = 0;
	double result = 0;
	scanf("%lld %lld %lld %lld",&h,&b,&c,&s);
	result = h*b*c*s;
	printf("%.1lf MB",result/(8*1024*1024));
	return 0;
}
