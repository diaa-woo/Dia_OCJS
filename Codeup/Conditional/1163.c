#include<stdio.h>

int main() {
	int year = 0, month = 0, day = 0;
	scanf("%d %d %d", &year, &month, &day);
	if(((year+month+day) / 100) % 2 == 0) printf("���");
	else printf("�׷�����"); 
	return 0;
}
