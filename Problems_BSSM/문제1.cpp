#include<stdio.h>

int main() {
	int age = 0;
	char name[100] = {};
	char code = 0;
	double keyCode = 0L;
	printf("�̸��� �Է����ּ���! ");
	scanf("%s",&name);
	printf("���̸� �Է��ϼ���! ");
	scanf("%d",&age);
	fflush(stdin); 
	printf("�μ��ڵ带 �Է��ϼ���! ");
	scanf("%c",&code);
	printf("����Ű�� �Է����ּ���! ");
	scanf("%lf",&keyCode);
	printf("******************************\n");
	printf("�̸�: %s\n����: %d\n�μ��ڵ�: %c\n����Ű: %.3lf\n", name, age, code, keyCode);
	printf("******************************\n");
	return 0;
}
