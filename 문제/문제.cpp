#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	int a = 1 , b = 20 , num = 0;
	srand(time(NULL));
	printf("***번호 뽑기 프로그램***\n");
	printf("번호의 범위를 입력하세요(시작 번호, 마지막 번호): ");
	scanf("%d %d",&a,&b);
	num = rand() % (b - a) + 1;
	printf("축하합니다! 뽑힌 번호는 %d입니다!\n");
	return 0; 
}
