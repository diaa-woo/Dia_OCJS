#include <stdio.h>

void f(int n) {
	int i, size;
	int b[255];
	for(i=0; n > 1 ; i++) {//n�� 2�� ���� ����  1���� ũ�� �ݺ� 
	   b[i] = n % 2;
	   n = n/2 ;
	}	
	if (n==1) b[i] = 1;
	else b[i] = 0;
	
	size = i; //�迭�� ũ�� ?
	for(i=size; i>=0; i--) printf("%d", b[i]) ;
}

int main(){
  int n ;
	scanf("%d", &n) ;
	f(n);
	return 0;
}
//�������� �� ��µǸ� 6~14 line�� �Լ��� ����� ����.
