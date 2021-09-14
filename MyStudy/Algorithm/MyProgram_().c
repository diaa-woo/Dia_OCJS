#include<stdio.h>

int squared(int number,int times) {
	if(times == 0) return 1;  //만약 지수+1만큼 함수가 실행되었으면 1 반환 
	else return squared(number,times-1)*number;  //지수+1만큼 재귀시키고 지수만큼 밑을 제곱시켜주고 그 값을 반환시킨다. 
	
}

int main() {
	int i = 0,a = 0;  //a는 밑, i는 지수이다. 
	scanf("%d %d",&a,&i);  //입력 
	printf("%d",squared(a,i));
	return 0;
}
