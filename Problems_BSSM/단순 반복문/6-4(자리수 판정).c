#include<stdio.h>

int main() {
	int n = 0;
	scanf("%d",&n);
	int cnt = 0;
	while(n!=0) {
		n=n/10;
		cnt++;
	}
	printf("%d",cnt);
}
