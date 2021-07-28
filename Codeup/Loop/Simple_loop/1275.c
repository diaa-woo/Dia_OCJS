#include<stdio.h>

void main() {
	int a = 0, b = 0,c = 1;
	scanf("%d %d",&a,&b);
	if(b == 0) printf("%d",1);
	else {
		for(int i = 1;i<=b;i++) {
			c *= a;
		}
		printf("%d",c);
	}
	return;
}
