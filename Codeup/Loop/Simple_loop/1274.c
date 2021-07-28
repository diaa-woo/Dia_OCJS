#include<stdio.h>

int main() {
	int a = 0,i;
	scanf("%d",&a);
	for(i = 2; i<=a;i++) {
		if(a%i==0) break;
	}
	if(i!=a) {
		printf("not prime");
	}
	else{
		printf("prime");
	}
	return 0;
}
