#include <stdio.h>

typedef struct {
	int age;
	char phone_number[14];
} Student;

int main(){
	Student goorm;
	
	printf("���� : ");
	scanf("%d", &goorm.age);
	printf("��ȣ : ");
	scanf("%s", goorm.phone_number);
	
	printf("----\n���� : %d\n��ȣ : %s\n----", goorm.age, goorm.phone_number);
	
	return 0;
}
