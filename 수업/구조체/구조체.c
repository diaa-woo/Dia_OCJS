#include <stdio.h>

//struct ����ü �̸� { ����ü ����� };

struct student
{
	char name[15];
	int s_id;
	int age;
	char phone_number[14];
};

int main()
{
	struct student goorm;
	
	printf("�̸� : ");
	scanf("%s", goorm.name);
	printf("�й� : ");
	scanf("%d", &goorm.s_id);
	printf("���� : ");
	scanf("%d", &goorm.age);
	printf("��ȣ : ");
	scanf("%s", goorm.phone_number);
	
	printf("�̸� : %s, �й� : %d, ���� : %d, ��ȣ : %s\n", goorm.name, goorm.s_id, goorm.age, goorm.phone_number);
	
	return 0;
}
