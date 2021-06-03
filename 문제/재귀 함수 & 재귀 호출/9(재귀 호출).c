#include<stdio.h>
int a = 1;
int n;

int f(int n) {
	for(int j = 1;j<=a;j++) printf("*");
	printf("\n");
	if(a==n) return 0;
	else {
		a++;
		f(n);
	}
}

int main() {
	scanf("%d",&n);
	f(n);
	return 0;
}
