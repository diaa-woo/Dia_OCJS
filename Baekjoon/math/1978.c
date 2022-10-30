#include <stdio.h>

int count = 0;

int isPrimeNumber(int num) {
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
	int n = 0, buf = 0, check = 0;
	scanf("%d",&n);
	for(int i = 0; i<n; i++) {
		scanf("%d", &buf);
		if(buf == 1) continue;
		else check += isPrimeNumber(buf);
	}
	printf("%d", check);
	return 0;
}
