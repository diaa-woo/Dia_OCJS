#include <stdio.h>
int main() {
	int a = 0;
	scanf("%d",&a);
	int* b;
	b = &a;
	*b = *b +20;
	printf("%d %d",a,*b);
	return 0;
}
