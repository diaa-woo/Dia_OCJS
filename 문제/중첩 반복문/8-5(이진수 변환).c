#include <stdio.h>
int main(){
	int b[255] , n ;
	int i, size ;
	scanf("%d", &n) ;
	for(i=0; n > 1 ; i++) {//n�� 2�� ���� ����  1���� ũ�� �ݺ� 
	   b[i] = n % 2;
	   n = n/2 ;
	}	
	if (n==1) b[i] = 1;
	else b[i] = 0;
	
	size = i; //�迭�� ũ�� ?
	for(i=size; i>=0; i--) printf("%d", b[i]) ;//�ڿ������� ������ ��� 
	return 0;
}
//�������� �� ��µǸ� 6~14 line�� �Լ��� ����� ����.
