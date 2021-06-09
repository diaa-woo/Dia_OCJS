#include <stdio.h>

typedef struct {
	char name[30];
	int age;
} Student;

int main(){
	Student goorm[3] = { {.name = "해리 포터"}, {.name = "헤르미온느 그레인저"}, {.name = "론 위즐리"} };
	
	goorm[0].age = 10;
	goorm[1].age = 10;
	goorm[2].age = 10;
	
	printf("이름 : %s / 나이 : %d\n", goorm[0].name, goorm[0].age);
	printf("이름 : %s / 나이 : %d\n", goorm[1].name, goorm[1].age);
	printf("이름 : %s / 나이 : %d\n", goorm[2].name, goorm[2].age);
	
	return 0;
}
