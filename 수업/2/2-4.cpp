#include<stdio.h>

int foo(int* a) {
	printf("%p\n", a);
	a = a + 10;
	printf("%p",a);
}

int main() {
	int x = 2;
	foo(x);
	return 0;
}
