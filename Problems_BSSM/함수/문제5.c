//����� ���� �Լ��� ������ �ۼ��մϴ�. 

#include <stdio.h>
// ����� ���� �Լ� ����
bool f(int y) // ��ȯ���� ����(True), ���(False) �ΰ� ���̹Ƿ� bool
{
	if(y%400==0 || (y%4==0 && y%100!=0)) return true;
	else return false;
}
// main() �Լ� 
int main() {
	int year = 0;
	scanf("%d", &year);
	if(f(year)==true) {
		printf("����");
	}
	else printf("���");
	
	return 0;
}
