//2의 제곱수 출력하기
#include<stdio.h>

int main() {
	//1. 변수 출력
	int i = 0;
	int val = 1;
	int n = 15;
	//2.n회 2를 곱하기 반복
	for (i = 1; i <= n; i++) {
		val = val * 2;
	}
	//3. 출력
	printf("2의 %d승은 %d입니다",n, val);
	return 0;
}