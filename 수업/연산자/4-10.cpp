#include<stdio.h>

int main() {
	int input = 0, a = 0, b = 0, c = 0;
	scanf("%d",&input);
	a = input /100;
	b = (input-a*100) /10;
	c = (input-(a*100+b*10));
	printf("%d", a+b+c);
}
