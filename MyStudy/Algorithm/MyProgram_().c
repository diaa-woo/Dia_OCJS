#include<stdio.h>

int squared(int number,int times) {
	if(times == 0) return 1;  //���� ����+1��ŭ �Լ��� ����Ǿ����� 1 ��ȯ 
	else return squared(number,times-1)*number;  //����+1��ŭ ��ͽ�Ű�� ������ŭ ���� ���������ְ� �� ���� ��ȯ��Ų��. 
	
}

int main() {
	int i = 0,a = 0;  //a�� ��, i�� �����̴�. 
	scanf("%d %d",&a,&i);  //�Է� 
	printf("%d",squared(a,i));
	return 0;
}
