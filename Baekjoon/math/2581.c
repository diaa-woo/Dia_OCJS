#include <stdio.h>

int checkPrimeNumber(int num1, int num2) {
	int i = 0, buf = num;
	for(i=2; i < buf; i++) {
		while(buf%i==0) {
			buf/= i;
		}
	}
	if(num == i) return 1;
	else return 0;
}

int main() {
	int n = 0, n1 = 0,n2 = 0, check = 0;
	scanf("%d",&n);
	for(int i = 0; i<n; i++) {
		scanf("%d %d", &n1, &n2);
		if(buf == 1) checkPrimeNumber(n1, n2);
		else check += checkPrimeNumber(n1, n2);
	}
	printf("%d", check);
	return 0;
}
