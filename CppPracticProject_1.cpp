//2�� ������ ����ϱ�
#include<stdio.h>

int main() {
	//1. ���� ���
	int i = 0;
	int val = 1;
	int n = 15;
	//2.nȸ 2�� ���ϱ� �ݺ�
	for (i = 1; i <= n; i++) {
		val = val * 2;
	}
	//3. ���
	printf("2�� %d���� %d�Դϴ�",n, val);
	return 0;
}