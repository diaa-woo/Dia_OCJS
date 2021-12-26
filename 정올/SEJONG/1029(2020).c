#include<stdio.h>

int main() {
	int n = 0,buf = 0;
	scanf("%d",&n);
	for(int i = 2; i<=100000; i++) {
		if(n<i) break;
		for(;;) {
			if(n%i==0) {
				printf("%d ",i);
				n /= i;
			}
			else break;
		}
	}
	return 0;
}
