#include<stdio.h>

void odd_print(a,b) {
	if(a>b) return;
	if(a%2 == 1) printf("%d ",a);
	odd_print(a+1,b);
}

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	odd_print(a,b);
	return 0;
}

