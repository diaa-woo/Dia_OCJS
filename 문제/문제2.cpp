#include<stdio.h>

int main() {
	int middleScore = 0, lastScore = 0,doScore = 0;
	float middlePercent = 0, lastPercent = 0, doPercent = 0,finallyScore = 0;
	printf("*** 과목별 점수 계산 프로그램 ***\n");
	printf("중간고사 반영비율/받은 점수를 입력하세요: ");
	scanf("%f %d",&middlePercent,&middleScore);
	fflush(stdin);
	printf("기말고사 반영비율/받은 점수를 입력하세요: ");
	scanf("%f %d",&lastPercent,&lastScore);
	printf("수행평가 반영비율/받은 점수를 입력하세요: "); 
	scanf("%f %d",&doPercent,&doScore);
	finallyScore = middlePercent * middleScore + lastPercent * lastScore + doPercent * doScore;
	printf("점수는 %.1f입니다.",finallyScore);
	return 0;
} 
