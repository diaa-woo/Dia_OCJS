#include<stdio.h>

int main() {
	int n=1; //ó�� ���� �˻縦 �Ѿ�� ���� 0�� �ƴ� �� �Է�
	while(n!=0)
	{
		scanf("%d", &n);
		if(n==0) break;
		printf("%d", n);
	}
}
