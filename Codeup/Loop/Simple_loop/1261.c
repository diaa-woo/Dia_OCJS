#include<stdio.h>

int main() {
	int a[50] = {0,},i,b = 0;
	for(i = 0; i<=10;i++) {
		scanf("%d",&a[i]);
		if(a[i]%5==0) {
			b = a[i];
			break;
		}
	}
	printf("%d",b);
	return 0;
}
