#include <stdio.h>

int main() {
	int a = 0, b = 0;
	scanf("%d %d",&a, &b);
	printf("%d\n%d\n%d\n%d",  a*(((b-b/100*100)-((b-b/100*100)/10*10))), a*((b-b/100*100)/10), a*(b/100), a*b);
	return 0;
	
}
