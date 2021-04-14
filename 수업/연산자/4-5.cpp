#include<stdio.h>

int main() {
	int a=2, b=3, c=4;
	a = ++a + ++a;
	b = ++c + c++ + c++;
	printf("%d %d", a, b);
	return 0;
}
