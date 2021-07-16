#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d", &a);
	if(a > 100) {
		printf("Error!");
	}
	else if(90<=a && a<=100) {
		printf("A");
	}
	else if(70<=a && a<=89) {
		printf("B");
	}
	else if(40<=a && a<=69) {
		printf("C");
	}
	else {
		printf("D");
	}
	return 0;
}
