#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d", &a);
	if(a<=10) printf("����");
	else if(a>10 && a<=20) printf("��ü��");
	else printf("��");
	return 0; 
}
