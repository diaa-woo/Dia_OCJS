#include <stdio.h>

typedef struct {
	char name[30];
	int age;
} Student;

int main(){
	Student goorm[3] = { {.name = "�ظ� ����"}, {.name = "�츣�̿´� �׷�����"}, {.name = "�� ����"} };
	
	goorm[0].age = 10;
	goorm[1].age = 10;
	goorm[2].age = 10;
	
	printf("�̸� : %s / ���� : %d\n", goorm[0].name, goorm[0].age);
	printf("�̸� : %s / ���� : %d\n", goorm[1].name, goorm[1].age);
	printf("�̸� : %s / ���� : %d\n", goorm[2].name, goorm[2].age);
	
	return 0;
}
