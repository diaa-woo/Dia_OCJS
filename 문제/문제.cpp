#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	int a = 1 , b = 20 , num = 0;
	srand(time(NULL));
	printf("***��ȣ �̱� ���α׷�***\n");
	printf("��ȣ�� ������ �Է��ϼ���(���� ��ȣ, ������ ��ȣ): ");
	scanf("%d %d",&a,&b);
	num = rand() % (b - a) + 1;
	printf("�����մϴ�! ���� ��ȣ�� %d�Դϴ�!\n");
	return 0; 
}
