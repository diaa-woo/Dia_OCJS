#include <stdio.h>
int n;
long long int f(int n) {
	int i;
	long long sum = 0;
	for(i=1;i<=n;i++) {
		sum = sum + i;
	}
	return sum;
}

// n을 전달받아 1부터 n까지의 정수합을 구하는함수를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
