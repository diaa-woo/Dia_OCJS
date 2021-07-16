#include<stdio.h>

int main() {
	int a = 0;
	while(1) {
		scanf("%d",&a);
		if(a==0) break;
		printf("%d",a);
	}
	return 0;
}
