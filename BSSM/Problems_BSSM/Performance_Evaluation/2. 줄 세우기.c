#include <stdio.h>
int max,min,middle;

void f(int a,int b, int c) {
	max = a;
	if(max<b) max = b;
	if(max<c) max = c;
	if(max==a) {
		min = b;
		if(min>c) {
			min = c;
			middle = b;
		}
		else {
			middle = c;
		}
	}
	if(max==b) {
		min = a;
		if(min>c) {
			min = c;
			middle = a;
		}
		else {
			middle = c;
		}
	}
	if(max==c) {
		min = a;
		if(min>b) {
			min = b;
			middle = a;
		}
		else {
			middle = b;
		}
	}
	return;
}

main( ) 
{
  int a, b, c;
  printf("3사람의 몸무게를 차례로 입력하시오. : ");
  scanf("%d %d %d", &a, &b, &c);
	f(a,b,c);	
  printf("%d %d %d\n", min,middle, max);
}
