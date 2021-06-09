#include <stdio.h>

//struct 구조체 이름 { 구조체 멤버들 };

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
	
	printf("이름 : ");
	scanf("%s", goorm.name);
	printf("학번 : ");
	scanf("%d", &goorm.s_id);
	printf("나이 : ");
	scanf("%d", &goorm.age);
	printf("번호 : ");
	scanf("%s", goorm.phone_number);
	
	printf("이름 : %s, 학번 : %d, 나이 : %d, 번호 : %s\n", goorm.name, goorm.s_id, goorm.age, goorm.phone_number);
	
	return 0;
}
