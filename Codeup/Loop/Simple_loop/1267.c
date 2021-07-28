#include<stdio.h>

int main() {
	int a = 0,b = 0,c = 0;
	scanf("%d",&a);
	for(int i = 1; i<=a; i++) {
		scanf("%d",&b);
		if(b%5!=0) continue;
		c += b;
	}
	printf("%d",c);
	return 0;
}
