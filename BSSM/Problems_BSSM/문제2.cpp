#include<stdio.h>

int main() {
	int middleScore = 0, lastScore = 0,doScore = 0;
	float middlePercent = 0, lastPercent = 0, doPercent = 0,finallyScore = 0;
	printf("*** ���� ���� ��� ���α׷� ***\n");
	printf("�߰���� �ݿ�����/���� ������ �Է��ϼ���: ");
	scanf("%f %d",&middlePercent,&middleScore);
	fflush(stdin);
	printf("�⸻��� �ݿ�����/���� ������ �Է��ϼ���: ");
	scanf("%f %d",&lastPercent,&lastScore);
	printf("������ �ݿ�����/���� ������ �Է��ϼ���: "); 
	scanf("%f %d",&doPercent,&doScore);
	finallyScore = middlePercent * middleScore + lastPercent * lastScore + doPercent * doScore;
	printf("������ %.1f�Դϴ�.",finallyScore);
	return 0;
} 
