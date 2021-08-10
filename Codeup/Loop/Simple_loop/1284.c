#include<stdio.h>

int check(int a) {
	for(int i = 2; i<a; i++) {
		if(a%i==0) {
			return 0;
		}
	}
	return a;
}

void main() {
	int a = 0;
	scanf("%d",&a);
	for(int i = 2;i<a; i++) {
		if(check(i)==0) continue;
		else {
			if(a%check(i)==0) {
				if(check(a/check(i))==0) continue;
				printf("%d %d",check(i),a/check(i));
				return;
			}
		}
	}
	printf("wrong number");
	return;
}
