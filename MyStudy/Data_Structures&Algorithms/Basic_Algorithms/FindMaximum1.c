/* �� ���� ���� �Է��ϰ� �ִ밪�� ���մϴ�. */ 
/* Enter three values and find the maximum */
#include<stdio.h>

int main() {
	int a,b,c;
	int max /*maximum*/
	printf("�� ������ �ִ��� ���մϴ�.\n"); /* Find the maximum of three integers */
	printf("a�� ��: "); scanf("%d", &a); /* Enter A value */ 
	printf("b�� ��: "); scanf("%d", &b); /* Enter B value */ 
	printf("c�� ��: "); scanf("%d", &c); /* Enter C value */ 
	max = a; 			/* Main Algorithm */
	if(b>max) max = b;	/* */
	if(c>max) max = c; 	/* */
	
	printf("�ִ��� %d�Դϴ�.\n", max); /*Maximum is %d */ 
	
	return 0;
} 
