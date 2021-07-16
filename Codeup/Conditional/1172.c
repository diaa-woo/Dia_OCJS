#include<stdio.h>

int max(int a, int b, int c) {
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
}

int middle(int a, int b, int c) {
	int middle = 0;
	if((a>=b && b>=c)||(c>=b && b>=a)) middle = b;
	else if((b>=a && a>=c )|| (a>=b && c>=a)) middle = a;
	else middle = c;
	return middle;
}

int min(int a, int b, int c) {
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	return min;
}

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d",min(a,b,c),middle(a,b,c),max(a,b,c));
	return 0;
}
