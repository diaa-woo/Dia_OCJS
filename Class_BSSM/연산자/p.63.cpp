#include<stdio.h>

int main() {
	int a = 3, b = 2;
	printf("%d %d\n", ++a, b--);
	a += 1; b -= 1;
	printf("%d %d\n", a,b);
	printf("%d\n", 4/3);
	printf("%f\n", 4/3);
	printf("%.2f\n", (float)4/3);
	printf("%f\n", 4/3.0);
}
