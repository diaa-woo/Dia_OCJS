#include<stdio.h>

int main() {
	int a = 0,count = 1;
	scanf("%d",&a);
	for(int i = a; i>=1; i--) {
		for(int k = 1;k<count; k++) {
			printf(" ");
		}
		for(int j = 1; j<=i; j++) {
			printf("*");
		}
		count++;
		printf("\n");
	}
	return 0;
}
