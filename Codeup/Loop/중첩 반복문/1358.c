#include<stdio.h>

int main() {
	int a = 0,count = 1;
	scanf("%d",&a);
	int count2 = a/2+1;
	for(int i = 0; i<a/2+1;i++) {
		for(int j =a/2-i; j>0;j--) {
			printf(" ");
		}
		for(int k = 1;k<=i*2+1; k++) {
			printf("*");
		}
		printf("\n");
		count += 2;
		count2--;
	}
	return 0;
}
