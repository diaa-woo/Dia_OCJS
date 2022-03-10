#include<stdio.h>

int main() {
	int a = 0, b = 0;
	scanf("%d %d",&a,&b);
	a>b ? printf(">") : a==b ? printf("==") : printf("<");
	return 0;
}
