#include<stdio.h>

int main() {
	int a = 0, m = 0, d = 0, n = 0, i;
	long long int sum = 0;
	scanf("%d %d %d %d",&a,&m,&d,&n);
	sum = a;
	for(i = 1; i<n; i++) {
		sum = sum *m +d;
	}
	printf("%lld",sum);
	return 0;
}
