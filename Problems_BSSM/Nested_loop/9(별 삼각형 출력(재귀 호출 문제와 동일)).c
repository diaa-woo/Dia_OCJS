#include<stdio.h>

int main() {
	int a = 0,count = 1;
	scanf("%d",&a);
	for(int i = 0; i != a; i++) {
		for(int j = 0;j<count;j++) {
			printf("*");
		}
		count++;
		printf("\n");
	}
}
