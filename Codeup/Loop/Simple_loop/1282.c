#include<stdio.h>

void main() {
	int a = 0,mis = 0,i;
	scanf("%d",&a);
	for(i = 0; 1; i++) {
		if(i*i >= a) {
			mis = a- (i-1)*(i-1);
			break;
		}
	}
	printf("%d %d",mis,i-1);
	return;
}
