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

// n�� ���޹޾� 1���� n������ �������� ���ϴ��Լ��� �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
