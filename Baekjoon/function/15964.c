#include <stdio.h>

int main() {
	long long result = 0, a = 0, b = 0;
	scanf("%lld %lld", &a, &b);
	result = (a+b) * (a-b);
	printf("%lld", result);
	return 0;
}
