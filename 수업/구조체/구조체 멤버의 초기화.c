
#include <stdio.h>

struct student
{
	int age;
	char phone_number[14];
	int s_id;
};

int main()
{
	struct student goorm = { .age = 20, .phone_number = "010-1234-5678", 10 };
	struct student codigm = { 22, "010-8765-4321"};

	printf("���� : %d, ��ȣ : %s, �й� : %d\n", goorm.age, goorm.phone_number, goorm.s_id);
	printf("���� : %d, ��ȣ : %s, �й� : %d\n", codigm.age, codigm.phone_number, codigm.s_id);

	return 0;
}
