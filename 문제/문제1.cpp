#include<stdio.h>

int main() {
	int age = 0;
	char name[100] = {};
	char code = 0;
	double keyCode = 0L;
	printf("이름을 입력해주세요! ");
	scanf("%s",&name);
	printf("나이를 입력하세요! ");
	scanf("%d",&age);
	fflush(stdin); 
	printf("부서코드를 입력하세요! ");
	scanf("%c",&code);
	printf("보안키를 입력해주세요! ");
	scanf("%lf",&keyCode);
	printf("******************************\n");
	printf("이름: %s\n나이: %d\n부서코드: %c\n보안키: %.3lf\n", name, age, code, keyCode);
	printf("******************************\n");
	return 0;
}
