#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d", &a);
	if(a>0) printf("양수");
	else if (a == 0) printf("0");
	else printf("음수");
	return 0;
}
