#include<stdio.h>
void star(int k){ //"*"�� k�� ��ŭ ��� ����Լ�
	if (k==0) return;
	printf("*");
	star(k-1);
}

void lprint(int n, int k){ //n�� �ﰢ���� �ϼ��ϴ� ����Լ�
	if (n==0) return; //�������� ����
	star(k);   //"*"�� k����ŭ ��� ����Լ� ȣ��
	printf("\n");    //�ٹٲ�
	lprint(n-1,k+1); //���ȣ��
}

int main(){
	int n, k = 1;
	scanf("%d",&n);
	lprint(n,k);
	
	return 0;
}