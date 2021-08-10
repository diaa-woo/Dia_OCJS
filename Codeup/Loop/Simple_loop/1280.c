#include<stdio.h>

void main() {
	int a = 0, b = 0,sum = 0;
	scanf("%d %d",&a,&b);
	for(int i = a; i<=b; i++) {
		if(i%2 == 0) {
			printf("-%d",i);
			sum -= i;
		}
		else {
			printf("+%d",i);
			sum += i;
		}
	}
	printf("=%d",sum);
	return;
}
