#include<stdio.h>

int main() {
	int a = 0,i,b = 0;
	scanf("%d",&a);
	for(i = 0; i<=a;i++) {
		if(i%2==0) b+=i;
	}
	printf("%d",b);
	return 0;
}
