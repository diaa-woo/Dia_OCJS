#include <stdio.h>
  void f(int n){
 	if (n == 0) return; //���� 0�̸� ����
    f(n/2); //n�� 2�� ���� ���� ��
    printf("%d",n%2);  //������ ���ڸ��� ���     
}

int main()
{   
    int n;
    scanf( "%d", &n );
    f(n);  
    return 0;
}

