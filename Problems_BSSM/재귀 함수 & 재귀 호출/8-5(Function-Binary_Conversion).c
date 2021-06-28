#include <stdio.h>

void f(int n) {
	int i, size;
	int b[255];
	for(i=0; n > 1 ; i++) {//n을 2로 나눈 몫이  1보다 크면 반복 
	   b[i] = n % 2;
	   n = n/2 ;
	}	
	if (n==1) b[i] = 1;
	else b[i] = 0;
	
	size = i; //배열의 크기 ?
	for(i=size; i>=0; i--) printf("%d", b[i]) ;
}

int main(){
  int n ;
	scanf("%d", &n) ;
	f(n);
	return 0;
}
//이진수가 잘 출력되면 6~14 line을 함수로 만들어 보자.
