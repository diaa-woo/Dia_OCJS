#include<stdio.h>

int main() {
	int a = 0,b = 0,c = 0,max = 0, min = 0, mid = 0;
	scanf("%d %d %d",&a,&b,&c);
	if(a == b || b == c || c == a) {
		printf("Impossible");
		return 0;
	}
	max = a; min = a;
	if(max<b) max = b;
	else if(max<c) max = c;
	if(max == a) {
		if(b > c) {
			mid = b;
			min = c;
		}
		else {
			mid = c;
			min = b;
		}
	}
	else if(max == b) {
		if(a > c) {
			mid = a;
			min = c;
		}
		else {
			mid = c;
			min = a;
		}
	}
	else {
		if(b > a) {
			mid = b;
			min = a;
		}
		else {
			mid = a;
			min = b;
		}
	}
	printf("%d %d %d",min,mid,max);
	return 0;
}
