#include<stdio.h>

int main() {
	int a = 0,i = 0,k = 0;
	scanf("%d",&a);
	for(i = 0;i<a; i++) {
		printf("*");
	}
	printf("\n");
	for(int j =0; j<a-2;j++) {
		printf("*");
		for(k = 0;k<a-2;k++) {
			printf(" ");
		}
		printf("*\n");
	}
	for(i = 0;i<a; i++) {
		printf("*");
	}
}
