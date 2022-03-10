#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d", &a);
	a >= 90? printf("A") : a >= 80? printf("B") : a >= 70? printf("C") : a >= 60? printf("D") : printf("F");
	return 0;
}
