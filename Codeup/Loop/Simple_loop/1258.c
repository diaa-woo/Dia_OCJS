#include<stdio.h>

int main() {
	int a = 0,b = 0;
	scanf("%d",&a);
	for(int i = 0; i<=a;i++) {
		b+=i;
	}
	printf("%d",b);
	return 0;
}
