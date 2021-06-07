#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d",&a);
	for(int i = 0; i<a; i++) {
		for(int k = 0; k<i; k++) {
			printf(" ");
		}
		printf("**");
		printf("\n");
	}
	return 0;
}
