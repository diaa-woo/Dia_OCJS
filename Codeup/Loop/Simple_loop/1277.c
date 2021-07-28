#include<stdio.h>

int main() {
	int a = 0,b = 0,c = 0;
	scanf("%d",&a);
	for(int i = 1; i<=a; i++) {
		scanf("%d",&b);
		if(i==1) {
			printf("%d ",b);
			if(a==1) {
				printf("%d %d",b,b);
			}
		}
		else if(i==a/2+1) {
			printf("%d ",b);
		}
		else if(i==a) {
			printf("%d ",b);
		}
	}
	return 0;
}
