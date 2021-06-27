#include<stdio.h>
void star(int k){ //"*"을 k개 만큼 찍는 재귀함수
	if (k==0) return;
	printf("*");
	star(k-1);
}

void lprint(int n, int k){ //n줄 삼각형을 완성하는 재귀함수
	if (n==0) return; //종료조건 지정
	star(k);   //"*"을 k개만큼 찍는 재귀함수 호출
	printf("\n");    //줄바꿈
	lprint(n-1,k+1); //재귀호출
}

int main(){
	int n, k = 1;
	scanf("%d",&n);
	lprint(n,k);
	
	return 0;
}
