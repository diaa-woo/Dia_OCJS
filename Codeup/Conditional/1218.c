#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<=c) printf("�ﰢ���ƴ�");
	else if (a==b && b==c && c==a) printf("���ﰢ��");
	else if (a==b || b==c) printf("�̵�ﰢ��");
	else if (a*a + b*b == c*c) printf("�����ﰢ��");
	else printf("�ﰢ��");
	return 0; 
}
