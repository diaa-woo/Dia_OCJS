#include <stdio.h>

typedef struct {
	int age;
	char phone_number[14];
} Student;

int main(){
	Student goorm;
	
	printf("나이 : ");
	scanf("%d", &goorm.age);
	printf("번호 : ");
	scanf("%s", goorm.phone_number);
	
	printf("----\n나이 : %d\n번호 : %s\n----", goorm.age, goorm.phone_number);
	
	return 0;
}
