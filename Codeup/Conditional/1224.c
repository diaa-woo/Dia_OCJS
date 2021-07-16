#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d %d %d %d", &a,&b,&c,&d);
	if((float)a/b>(float)c/d) printf(">");
	else if((float)a/b == (float)c/d) printf("=");
	else printf("<");
	return 0;
}
