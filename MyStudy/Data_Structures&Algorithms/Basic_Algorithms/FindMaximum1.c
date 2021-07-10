/* 세 정수 값을 입력하고 최대값을 구합니다. */ 
/* Enter three values and find the maximum */
#include<stdio.h>

int main() {
	int a,b,c;
	int max /*maximum*/
	printf("세 정수의 최댓값을 구합니다.\n"); /* Find the maximum of three integers */
	printf("a의 값: "); scanf("%d", &a); /* Enter A value */ 
	printf("b의 값: "); scanf("%d", &b); /* Enter B value */ 
	printf("c의 값: "); scanf("%d", &c); /* Enter C value */ 
	max = a; 			/* Main Algorithm */
	if(b>max) max = b;	/* */
	if(c>max) max = c; 	/* */
	
	printf("최댓값은 %d입니다.\n", max); /*Maximum is %d */ 
	
	return 0;
} 
