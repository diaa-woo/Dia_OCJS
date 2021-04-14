#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n%.1f",a+b+c,(float)(a+b+c)/3);
	return 0; 
}
