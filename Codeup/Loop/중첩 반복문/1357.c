#include<stdio.h>

int main() {
	int a = 0,i = 0,k = 0;
	scanf("%d",&a);
	for(k = 1; k<=a; k++) {
	for(i = 0; i<k;i++) {
		printf("*");
	}
	printf("\n");
}
	for(k = a; k>0; k--) {
	for(i = 0; i<k-1;i++) {
		printf("*");
	}
	printf("\n");
}
	
}
